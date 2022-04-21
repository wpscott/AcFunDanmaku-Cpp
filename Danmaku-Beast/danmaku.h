#pragma once

#include <boost/asio/io_service.hpp>

#include "danmaku_request.h"

namespace AcFun {
namespace Danmaku {
constexpr auto USER_AGENT =
    "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, "
    "like Gecko) Chrome/87.0.4280.88 Safari/537.36";
constexpr auto ACCEPT_ENCODING = "gzip, deflate";

constexpr auto LOGIN_HOST = "id.app.acfun.cn";
constexpr auto LOGIN_PATH = "/rest/app/visitor/login";

constexpr auto VISITOR_ST = "acfun.api.visitor_st";
constexpr auto VISITOR_FORM = "sid=acfun.api.visitor";

constexpr auto KUAISHOU_HOST = "api.kuaishouzt.com";
constexpr auto KUAISHOU_PLAY_PATH = "/rest/zt/live/web/startPlay";
constexpr auto KUAISHOU_GIFT_PATH = "/rest/zt/live/web/gift/list";

constexpr auto LIVE_HOST = "live.acfun.cn";
constexpr auto ORIGIN = "https://live.acfun.cn";
constexpr auto LIVE_PATH = "/live/";

constexpr auto WS_HOST = "link.xiatou.com";

constexpr auto PORT = "443";
constexpr int VERSION = 11;

constexpr auto _DID = "_did=";

constexpr auto CONTENT_TYPE_FORM_URLENCODED =
    "application/x-www-form-urlencoded";

class Client {
 public:
  Client(net::io_context* ioc, const std::string& uid) : uid(uid) {
    this->ioc = ioc;
    resolver = new tcp::resolver{*ioc};
    ctx = new ssl::context(ssl::context::tlsv12_client);
    ctx->set_default_verify_paths();
    ctx->set_verify_mode(ssl::verify_peer | ssl::verify_fail_if_no_peer_cert);
    boost::certify::enable_native_https_server_verification(*ctx);

    std::stringstream ss;
    ss << "https://" << LIVE_HOST << LIVE_PATH << uid;
    referer = ss.str();
  }

  inline beast::error_code initialize() {
    auto ec = get_did();
    if (!ec) {
      did = std::string_view{
          cookie.data() + strlen(_DID),
          cookie.find_first_of(';', strlen(_DID)) - strlen(_DID)};

      ec = login(login_result);
    }
    if (!ec) {
      const auto& security_key =
          login_result["acSecurity"].get<std::string_view>();
      const auto& user_id = login_result["userId"].get<size_t>();
      const auto& service_token =
          login_result[VISITOR_ST].get<std::string_view>();

      std::stringstream play_uri_s;
      play_uri_s << KUAISHOU_PLAY_PATH
                 << "?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB&userId="
                 << user_id << "&did=" << did << "&" << VISITOR_ST << "="
                 << service_token;

      std::stringstream play_form_s;
      play_form_s << "authorId=" << uid;

      std::stringstream gift_uri_s;
      gift_uri_s << KUAISHOU_GIFT_PATH
                 << "?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB&userId="
                 << user_id << "&did=" << did << "&" << VISITOR_ST << "="
                 << service_token;

      std::stringstream gift_form_s;
      gift_form_s << "visitorId=" << user_id << "&liveId=";

      const auto& play_req =
          make_kuaishou_request(play_uri_s.str(), play_form_s.str());
      const auto& gift_req =
          make_kuaishou_request(gift_uri_s.str(), gift_form_s.str());

      ec = kuaishou(play_req, gift_req, play_result, gift_result);
    }

    if (!ec) {
      request = new DanmakuRequest(login_result, play_result);
    }

    return std::move(ec);
  }

  inline void start(net::yield_context yield) {
    constexpr auto host = WS_HOST;
    beast::error_code ec;

    ctx->set_verify_callback(ssl::host_name_verification(host));

    websocket::stream<beast::ssl_stream<beast::tcp_stream>> ws(*ioc, *ctx);
    ws.binary(true);

    const auto& result = resolver->async_resolve(host, PORT, yield[ec]);
    if (ec) {
      return fail(ec, "resolve");
    }

    beast::get_lowest_layer(ws).expires_after(std::chrono::seconds(30));

    auto ep = beast::get_lowest_layer(ws).async_connect(result, yield[ec]);
    if (ec) {
      return fail(ec, "connect");
    }

    if (!SSL_set_tlsext_host_name(ws.next_layer().native_handle(), host)) {
      ec = beast::error_code(static_cast<int>(::ERR_get_error()),
                             net::error::get_ssl_category());
      return fail(ec, "connect");
    }

    std::stringstream host_s;
    host_s << host << ep.port();

    beast::get_lowest_layer(ws).expires_after(std::chrono::seconds(30));
    ws.set_option(
        websocket::stream_base::decorator([](websocket::request_type& req) {
          req.set(http::field::user_agent, AcFun::Danmaku::USER_AGENT);
        }));

    ws.next_layer().async_handshake(ssl::stream_base::client, yield[ec]);
    if (ec) {
      return fail(ec, "ssl_handshake");
    }

    beast::get_lowest_layer(ws).expires_never();

    ws.set_option(
        websocket::stream_base::timeout::suggested(beast::role_type::client));

    ws.async_handshake(host, "/", yield[ec]);
    if (ec) {
      return fail(ec, "handshake");
    }

    bool running = true;
    int64_t heartbeatinterval;
    std::thread hbt;
    boost::asio::io_service ios;
    boost::asio::deadline_timer* timer;

    const auto& stop = [&]() {
      running = false;
      ws.async_close(websocket::close_code::going_away, yield[ec]);
      if (timer) {
        timer->cancel();
        ios.stop();
        if (hbt.joinable()) {
          hbt.join();
        }
      }
    };

    std::function<void(boost::system::error_code)> hbhandler =
        [&](const boost::system::error_code& error) {
          if (!error) {
            if (running && timer) {
              try {
                std::vector<uint8_t> buffer;
                request->HeartbeatRequest(buffer);
                ws.async_write(net::buffer(buffer), yield[ec]);
                if (!ec && (request->GetSeqId() % 5) == 4) {
                  buffer.clear();
                  request->KeepAliveRequest(buffer);
                  ws.async_write(net::buffer(buffer), yield[ec]);
                }
                timer->expires_from_now(
                    boost::posix_time::milliseconds(heartbeatinterval));
                timer->async_wait(hbhandler);
              } catch (const std::exception& e) {
                std::cout << e.what() << std::endl;
                stop();
              }
            } else {
              stop();
            }
          } else {
            stop();
          }
        };
    std::vector<uint8_t> reg;
    request->RegisterRequest(reg);

    ws.async_write(net::buffer(reg), yield[ec]);

    while (running) {
      beast::flat_buffer buffer;
      ws.async_read(buffer, yield[ec]);
      if (!ec) {
        AcFunDanmu::PacketHeader header;
        AcFunDanmu::DownstreamPayload payload;
        Utils::Decode((const char*)beast::buffers_front(buffer.cdata()).data(),
                      request->GetSecurityKey(), request->GetSessionKey(),
                      header, payload);
      }
      stop();
    }

    // ws.async_write(net::buffer("register"), yield[ec]);
    // if (ec) {
    //  return fail(ec, "write");
    //}

    // beast::flat_buffer buffer;

    // ws.async_read(buffer, yield[ec]);
    // if (ec) {
    //  return fail(ec, "read");
    //}
  }

 private:
  std::string uid;

  std::string cookie;
  std::string_view did;

  std::string referer;

  net::io_context* ioc = nullptr;
  tcp::resolver* resolver = nullptr;
  ssl::context* ctx = nullptr;

  json login_result;
  json play_result;
  json gift_result;
  DanmakuRequest* request;

  static inline void fail(const beast::error_code& ec,
                          const std::string_view& what) {
    std::cerr << what << ": " << ec.message() << std::endl;
  }

  static inline const void get_body(const beast::string_view& encoding,
                                    const std::string_view& data,
                                    std::string& body) noexcept {
    iostreams::array_source src{data.data(), data.size()};
    iostreams::filtering_istream is;

    if (encoding == "deflate") {
      is.push(iostreams::zlib_decompressor{});
    } else if (encoding == "gzip") {
      is.push(iostreams::gzip_decompressor{});
    }
    is.push(src);
    std::stringstream ss;
    iostreams::copy(is, ss);
    body = ss.str();
  }

  static inline const void get_body(
      const http::response<http::string_body>& res,
      std::string& body) noexcept {
    get_body(res[http::field::content_encoding], res.body(), body);
  }

  inline beast::error_code get_did() {
    constexpr auto host = LIVE_HOST;
    beast::error_code ec;

    ctx->set_verify_callback(ssl::host_name_verification(host));

    beast::ssl_stream<beast::tcp_stream> stream(*ioc, *ctx);

    if (!SSL_set_tlsext_host_name(stream.native_handle(), host)) {
      beast::error_code ec{static_cast<int>(::ERR_get_error()),
                           net::error::get_ssl_category()};
      throw beast::system_error{ec};
    }

    auto const results = resolver->resolve(host, PORT);

    beast::get_lowest_layer(stream).connect(results);

    stream.handshake(ssl::stream_base::client);

    http::request<http::empty_body> req{http::verb::head, "/", VERSION};
    req.set(http::field::host, host);
    req.set(http::field::user_agent, USER_AGENT);

    http::write(stream, req, ec);
    if (ec) {
      return ec;
    }

    beast::flat_buffer buffer;

    http::response_parser<http::empty_body> parser;
    parser.skip(true);

    http::read(stream, buffer, parser, ec);
    if (ec) {
      return ec;
    }

    const auto& res = parser.release();
    if (res.result() != http::status::ok) {
      std::cout << res << std::endl;
    } else {
      const auto& set_cookies = res.equal_range(http::field::set_cookie);
      for (auto it = set_cookies.first; it != set_cookies.second; ++it) {
        if (it->value().find(_DID) != beast::string_view::npos) {
          char buffer[100];
          it->value().copy(buffer, it->value().length(), 0);
          buffer[it->value().length()] = '\0';
          cookie = std::move(buffer);
          break;
        }
      }
    }

    stream.shutdown(ec);
    if (ec == net::error::eof || ec == net::ssl::error::stream_truncated) {
      ec = {};
    }
    return ec;
  }

  inline const http::request<http::string_body> make_post_request(
      const std::string_view& host, const std::string_view& uri,
      const std::string_view& body) noexcept {
    http::request<http::string_body> req{http::verb::post, uri.data(), VERSION};
    req.set(http::field::host, host.data());
    req.set(http::field::origin, ORIGIN);
    req.set(http::field::referer, referer.data());
    req.set(http::field::content_type, CONTENT_TYPE_FORM_URLENCODED);
    req.set(http::field::content_length, std::to_string(body.size()));
    req.set(http::field::accept_encoding, ACCEPT_ENCODING);
    req.set(http::field::cookie, cookie.data());
    req.set(http::field::user_agent, USER_AGENT);
    req.body() = body;
    return std::move(req);
  }

  inline const http::request<http::string_body> make_kuaishou_request(
      const std::string_view& uri, const std::string_view& form) noexcept {
    return make_post_request(KUAISHOU_HOST, uri.data(), form.data());
  }

  inline beast::error_code login(json& json) {
    constexpr auto host = LOGIN_HOST;
    beast::error_code ec;

    ctx->set_verify_callback(ssl::host_name_verification(host));

    beast::ssl_stream<beast::tcp_stream> stream(*ioc, *ctx);

    if (!SSL_set_tlsext_host_name(stream.native_handle(), host)) {
      beast::error_code ec{static_cast<int>(::ERR_get_error()),
                           net::error::get_ssl_category()};
      throw beast::system_error{ec};
    }

    const auto& results = resolver->resolve(host, PORT);

    beast::get_lowest_layer(stream).connect(results);

    stream.handshake(ssl::stream_base::client);

    const auto& req = make_post_request(host, LOGIN_PATH, VISITOR_FORM);

    http::write(stream, req, ec);
    if (ec) {
      return ec;
    }

    beast::flat_buffer buffer;

    http::response<http::string_body> res;

    http::read(stream, buffer, res, ec);
    if (ec) {
      return ec;
    }

    if (res.result() != http::status::ok) {
      std::cout << res << std::endl;
    } else {
      std::string body;
      get_body(res, body);

      json = json::parse(body);
    }

    stream.shutdown(ec);
    if (ec == net::error::eof || ec == net::ssl::error::stream_truncated) {
      ec = {};
    }

    return ec;
  }

  inline beast::error_code kuaishou(
      const http::request<http::string_body>& play_req,
      const http::request<http::string_body>& gift_req, json& play_result,
      json& gift_result) {
    constexpr auto host = KUAISHOU_HOST;
    beast::error_code ec;

    ctx->set_verify_callback(ssl::host_name_verification(host));

    beast::ssl_stream<beast::tcp_stream> stream(*ioc, *ctx);

    if (!SSL_set_tlsext_host_name(stream.native_handle(), host)) {
      beast::error_code ec{static_cast<int>(::ERR_get_error()),
                           net::error::get_ssl_category()};
      throw beast::system_error{ec};
    }

    const auto& results = resolver->resolve(host, PORT);

    beast::get_lowest_layer(stream).connect(results);

    stream.handshake(ssl::stream_base::client);
    {
      http::write(stream, play_req, ec);
      if (ec) {
        return ec;
      }

      beast::flat_buffer buffer;

      http::response<http::string_body> res;

      http::read(stream, buffer, res, ec);
      if (ec) {
        return ec;
      }

      if (res.result() != http::status::ok) {
        std::cout << res << std::endl;
      } else {
        std::string body;
        get_body(res, body);

        play_result = json::parse(body);
      }
    }
    {
      http::write(stream, gift_req, ec);
      if (ec) {
        return ec;
      }

      beast::flat_buffer buffer;

      http::response<http::string_body> res;

      http::read(stream, buffer, res, ec);
      if (ec) {
        return ec;
      }

      if (res.result() != http::status::ok) {
        std::cout << res << std::endl;
      } else {
        std::string body;
        get_body(res, body);

        gift_result = json::parse(body);
      }
    }
    stream.shutdown(ec);
    if (ec == net::error::eof || ec == net::ssl::error::stream_truncated) {
      ec = {};
    }

    return ec;
  }
};
}  // namespace Danmaku
}  // namespace AcFun
