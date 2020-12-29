#ifndef ACFUN_DANMAKU_HELPER_HTTP_CONNECTION
#define ACFUN_DANMAKU_HELPER_HTTP_CONNECTION

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include <algorithm>
#include <boost/asio/coroutine.hpp>
#include <boost/asio/dispatch.hpp>
#include <boost/asio/strand.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/config.hpp>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>
#include <string>
#include <thread>
#include <vector>

namespace beast = boost::beast;    // from <boost/beast.hpp>
namespace http = beast::http;      // from <boost/beast/http.hpp>
namespace net = boost::asio;       // from <boost/asio.hpp>
using tcp = boost::asio::ip::tcp;  // from <boost/asio/ip/tcp.hpp>
using json = nlohmann::json;

typedef std::function<void(const std::string&)> BrowserUpdate;

// Report a failure
void fail(beast::error_code ec, char const* what) {
  std::cerr << what << ": " << ec.message() << "\n";
}

// This function produces an HTTP response for the given
// request. The type of the response object depends on the
// contents of the request, so the interface requires the
// caller to pass a generic lambda for receiving the response.
template <class Body, class Allocator, class Send>
void handle_request(http::request<Body, http::basic_fields<Allocator>>&& req,
                    Send&& send, BrowserUpdate update_handler) {
  // Returns a bad request response
  auto const bad_request = [&req](beast::string_view why,
                                  http::status status =
                                      http::status::bad_request) {
    http::response<http::string_body> res{status, req.version()};
    res.set(http::field::content_type, "text/plain");
    res.keep_alive(req.keep_alive());
    res.body() = std::string(why);
    res.prepare_payload();
    return res;
  };

  // Returns a not found response
  auto const not_found = [&req](beast::string_view target) {
    http::response<http::string_body> res{http::status::not_found,
                                          req.version()};
    res.set(http::field::content_type, "text/plain");
    res.keep_alive(req.keep_alive());
    res.body() = "The resource '" + std::string(target) + "' was not found.";
    res.prepare_payload();
    return res;
  };

  // Returns a server error response
  auto const server_error = [&req](beast::string_view what) {
    http::response<http::string_body> res{http::status::internal_server_error,
                                          req.version()};
    res.set(http::field::content_type, "text/plain");
    res.keep_alive(req.keep_alive());
    res.body() = "An error occurred: '" + std::string(what) + "'";
    res.prepare_payload();
    return res;
  };

  switch (req.method()) {
    case http::verb::get:
      if (req.target().empty() || req.target() == "/") {
        http::string_body::value_type body =
            u8"{\"msg\":\"AcFun弹幕姬助手正在运行\"}";
        const auto size = body.size();
        http::response<http::string_body> res{
            std::piecewise_construct,
            std::make_tuple(std::move(body)),
            std::make_tuple(http::status::ok, req.version()),
        };
        res.set(http::field::content_type, "application/json");
        res.content_length(size);
        res.keep_alive(req.keep_alive());
        return send(std::move(res));
      } else {
        return send(not_found(req.target()));
      }
      break;
    case http::verb::post:
      if (req.target() == "/css") {
        const json& data = json::parse(req.body());
        if (data.contains("css")) {
          update_handler(data["css"].get<std::string>());
          http::string_body::value_type body = "{}";
          const auto size = body.size();
          http::response<http::string_body> res{
              std::piecewise_construct,
              std::make_tuple(std::move(body)),
              std::make_tuple(http::status::ok, req.version()),
          };
          res.set(http::field::content_type, "application/json");
          res.content_length(size);
          res.keep_alive(req.keep_alive());
          return send(std::move(res));
        } else {
          return send(bad_request("Invalid json"));
        }
      } else {
        return send(not_found(req.target()));
      }
      break;
    case http::verb::head:
      if (req.target().empty() || req.target() == "/") {
        http::response<http::empty_body> res{http::status::ok, req.version()};
        http::string_body::value_type body =
            u8"{\"msg\":\"AcFun弹幕姬助手正在运行\"}";
        const auto size = body.size();
        res.content_length(size);
        res.keep_alive(req.keep_alive());
        return send(std::move(res));
      } else if (req.target() == "/css") {
        http::response<http::empty_body> res{http::status::ok, req.version()};
        http::string_body::value_type body = "{}";
        const auto size = body.size();
        res.content_length(size);
        res.keep_alive(req.keep_alive());
        return send(std::move(res));
      }
      break;
    case http::verb::options:
      break;
    default:
      return send(
          bad_request("Unsupported method", http::status::method_not_allowed));
  }
}

// Handles an HTTP server connection
class session : public boost::asio::coroutine,
                public std::enable_shared_from_this<session> {
  // This is the C++11 equivalent of a generic lambda.
  // The function object is used to send an HTTP message.
  struct send_lambda {
    session& self_;
    std::shared_ptr<void> res_;

    explicit send_lambda(session& self) : self_(self) {}

    template <bool isRequest, class Body, class Fields>
    void operator()(http::message<isRequest, Body, Fields>&& msg) const {
      // The lifetime of the message has to extend
      // for the duration of the async operation so
      // we use a shared_ptr to manage it.
      auto sp = std::make_shared<http::message<isRequest, Body, Fields>>(
          std::move(msg));

      // Store a type-erased version of the shared
      // pointer in the class to keep it alive.
      self_.res_ = sp;

      // Write the response
      http::async_write(
          self_.stream_, *sp,
          beast::bind_front_handler(&session::loop, self_.shared_from_this(),
                                    sp->need_eof()));
    }
  };

  beast::tcp_stream stream_;
  beast::flat_buffer buffer_;
  http::request<http::string_body> req_;
  std::shared_ptr<void> res_;
  send_lambda lambda_;
  std::function<void(const std::string&)> update_handler;

 public:
  // Take ownership of the socket
  explicit session(tcp::socket&& socket, BrowserUpdate handler)
      : stream_(std::move(socket)), update_handler(handler), lambda_(*this) {}

  // Start the asynchronous operation
  void run() {
    // We need to be executing within a strand to perform async operations
    // on the I/O objects in this session. Although not strictly necessary
    // for single-threaded contexts, this example code is written to be
    // thread-safe by default.
    net::dispatch(stream_.get_executor(),
                  beast::bind_front_handler(&session::loop, shared_from_this(),
                                            false, beast::error_code{}, 0));
  }

#include <boost/asio/yield.hpp>

  void loop(bool close, beast::error_code ec, std::size_t bytes_transferred) {
    boost::ignore_unused(bytes_transferred);
    reenter(*this) {
      for (;;) {
        // Make the request empty before reading,
        // otherwise the operation behavior is undefined.
        req_ = {};

        // Set the timeout.
        stream_.expires_after(std::chrono::seconds(30));

        // Read a request
        yield http::async_read(stream_, buffer_, req_,
                               beast::bind_front_handler(
                                   &session::loop, shared_from_this(), false));
        if (ec == http::error::end_of_stream) {
          // The remote host closed the connection
          break;
        }
        if (ec) return fail(ec, "read");

        // Send the response
        yield handle_request(std::move(req_), lambda_, update_handler);
        if (ec) return fail(ec, "write");
        if (close) {
          // This means we should close the connection, usually because
          // the response indicated the "Connection: close" semantic.
          break;
        }

        // We're done with the response so delete it
        res_ = nullptr;
      }

      // Send a TCP shutdown
      stream_.socket().shutdown(tcp::socket::shutdown_send, ec);

      // At this point the connection is closed gracefully
    }
  }

#include <boost/asio/unyield.hpp>
};

// Accepts incoming connections and launches the sessions
class listener : public net::coroutine,
                 public std::enable_shared_from_this<listener> {
  net::io_context& ioc_;
  tcp::acceptor acceptor_;
  tcp::socket socket_;
  BrowserUpdate update_handler;

 public:
  listener(net::io_context& ioc, tcp::endpoint endpoint, BrowserUpdate handler)
      : ioc_(ioc),
        acceptor_(net::make_strand(ioc)),
        socket_(net::make_strand(ioc)),
        update_handler(handler) {
    beast::error_code ec;

    // Open the acceptor
    acceptor_.open(endpoint.protocol(), ec);
    if (ec) {
      fail(ec, "open");
      return;
    }

    // Allow address reuse
    acceptor_.set_option(net::socket_base::reuse_address(true), ec);
    if (ec) {
      fail(ec, "set_option");
      return;
    }

    // Bind to the server address
    acceptor_.bind(endpoint, ec);
    if (ec) {
      fail(ec, "bind");
      return;
    }

    // Start listening for connections
    acceptor_.listen(net::socket_base::max_listen_connections, ec);
    if (ec) {
      fail(ec, "listen");
      return;
    }
  }

  // Start accepting incoming connections
  void run() { loop(); }

 private:
#include <boost/asio/yield.hpp>

  void loop(beast::error_code ec = {}) {
    reenter(*this) {
      for (;;) {
        yield acceptor_.async_accept(
            socket_,
            beast::bind_front_handler(&listener::loop, shared_from_this()));
        if (ec) {
          fail(ec, "accept");
        } else {
          // Create the session and run it
          std::make_shared<session>(std::move(socket_), update_handler)->run();
        }

        // Make sure each session gets its own strand
        socket_ = tcp::socket(net::make_strand(ioc_));
      }
    }
  }

#include <boost/asio/unyield.hpp>
};
#endif  // !ACFUN_DANMAKU_HELPER_HTPP_CONNECTION