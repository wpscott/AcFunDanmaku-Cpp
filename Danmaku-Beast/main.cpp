#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include "danmaku.h"

inline static void fail(beast::error_code ec, char const* what) {
  std::cerr << what << ": " << ec.message() << "\n";
}

void do_session(net::io_context& ioc, net::yield_context yield) {
  constexpr auto host = AcFun::Danmaku::WS_HOST;
  beast::error_code ec;

  ssl::context ctx(ssl::context::tlsv12_client);

  ctx.set_default_verify_paths();

  ctx.set_verify_mode(ssl::verify_peer | ssl::verify_fail_if_no_peer_cert);
  ctx.set_verify_callback(ssl::host_name_verification(host));

  boost::certify::enable_native_https_server_verification(ctx);

  tcp::resolver resolver(ioc);
  websocket::stream<beast::ssl_stream<beast::tcp_stream>> ws(ioc, ctx);
  ws.binary(true);

  const auto& result =
      resolver.async_resolve(host, AcFun::Danmaku::PORT, yield[ec]);
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

  // ws.async_write(net::buffer("register"), yield[ec]);
  // if (ec) {
  //  return fail(ec, "write");
  //}

  // beast::flat_buffer buffer;

  // ws.async_read(buffer, yield[ec]);
  // if (ec) {
  //  return fail(ec, "read");
  //}

  ws.async_close(websocket::close_code::going_away, yield[ec]);
  if (ec && ec != net::error::eof) {
    return fail(ec, "close");
  }
}

int main(int argc, char** argv) {
  if (argc != 2) {
    return EXIT_FAILURE;
  }
  try {
    net::io_context ioc;

    AcFun::Danmaku::Client client(&ioc, argv[1]);

    const auto& ec = client.initialize();

    if (!ec) {
      std::cout << "initialized" << std::endl;
      //boost::asio::spawn(
      //    ioc, std::bind(&do_session, std::ref(ioc), std::placeholders::_1));
      //ioc.run();
      boost::asio::spawn(ioc, std::bind(&AcFun::Danmaku::Client::start, &client, std::placeholders::_1));
      ioc.run();
    }

    if (ec) {
      std::cout << ec.message() << std::endl;
    }
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}