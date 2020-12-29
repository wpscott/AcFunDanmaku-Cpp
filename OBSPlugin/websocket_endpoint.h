#pragma once
#ifndef WEBSOCKET_ENDPOINT
#define WEBSOCKET_ENDPOINT
#include <obs-module.h>

#include <nlohmann/json.hpp>
#include <websocketpp/client.hpp>
#include <websocketpp/common/memory.hpp>
#include <websocketpp/common/thread.hpp>
#include <websocketpp/config/asio_no_tls_client.hpp>

namespace AcFun {
class websocket_endpoint {
 public:
  typedef websocketpp::client<websocketpp::config::asio_client> client;
  using json = nlohmann::json;

  websocket_endpoint() {
    endpoint.clear_access_channels(websocketpp::log::alevel::all);
    endpoint.clear_error_channels(websocketpp::log::alevel::all);

    endpoint.init_asio();
    endpoint.start_perpetual();

    thread = websocketpp::lib::make_shared<websocketpp::lib::thread>(
        &client::run, &endpoint);
    blog(LOG_INFO, "ws created");
  }
  ~websocket_endpoint() {
    status = endpoint_status::closing;
    endpoint.stop_perpetual();

    websocketpp::lib::error_code ec;
    endpoint.close(hdl, websocketpp::close::status::going_away, "", ec);
    if (ec) {
      blog(LOG_ERROR, "ws close error: %s", ec.message().c_str());
    }
    thread->join();
    blog(LOG_INFO, "ws destroyed");
  }

  bool connect(const uint64_t& uid,
               const std::function<void(const std::string&, const std::string&,
                                        const int&)>& addGift) {
    this->uid = uid;
    this->callback = addGift;

    status = endpoint_status::running;
    return connect();
  }

  void send(const std::string& message) {
    websocketpp::lib::error_code ec;

    endpoint.send(hdl, message, websocketpp::frame::opcode::text, ec);
    if (ec) {
      blog(LOG_ERROR, "ws send error: %s", ec.message().c_str());
    }
  }

  void close() {
    status = endpoint_status::closing;
    if (!is_uninitialized(hdl)) {
      endpoint.close(hdl, websocketpp::close::status::going_away, "");
    }
  }

 private:
  enum class endpoint_status {
    ready,
    running,
    closing,
  };
  endpoint_status status = endpoint_status::ready;
  uint64_t uid = 0;
  std::function<void(const std::string&, const std::string&, const int&)>
      callback;
  client endpoint;
  websocketpp::connection_hdl hdl;

  websocketpp::lib::shared_ptr<websocketpp::lib::thread> thread;

  const static bool is_uninitialized(const websocketpp::connection_hdl& hdl) {
    using wh = websocketpp::connection_hdl;
    return !hdl.owner_before(wh{}) && !wh{}.owner_before(hdl);
  }

  bool connect() {
    // char uri[32];
    // sprintf_s(uri, "ws://localhost:5000/%lld", uid);
    const auto uri = "ws://localhost:12451/chat";
    websocketpp::lib::error_code ec;
    client::connection_ptr conn = endpoint.get_connection(uri, ec);
    if (ec) {
      blog(LOG_ERROR, "Connection failed: %s", ec.message().c_str());
      return false;
    }
    hdl = conn->get_handle();

    conn->set_open_handler(
        websocketpp::lib::bind(&websocket_endpoint::on_open, this, &endpoint,
                               websocketpp::lib::placeholders::_1));
    conn->set_fail_handler(
        websocketpp::lib::bind(&websocket_endpoint::on_fail, this, &endpoint,
                               websocketpp::lib::placeholders::_1));
    conn->set_close_handler(
        websocketpp::lib::bind(&websocket_endpoint::on_close, this, &endpoint,
                               websocketpp::lib::placeholders::_1));
    conn->set_message_handler(
        websocketpp::lib::bind(&websocket_endpoint::on_message, this,
                               websocketpp::lib::placeholders::_1,
                               websocketpp::lib::placeholders::_2));

    endpoint.connect(conn);
    return true;
  }

  void on_open(client* c, websocketpp::connection_hdl hdl) {
    char msg[64];
    const auto& len =
        sprintf_s(msg, "{\"cmd\":1,\"data\":{\"roomId\":%llu}}", uid);
    blog(LOG_INFO, "message: %s, length: %d", msg, len);

    websocketpp::lib::error_code ec;
    endpoint.send(hdl, msg, len, websocketpp::frame::opcode::text, ec);
    if (ec) {
      blog(LOG_ERROR, "ws send error: %s", ec.message().c_str());
    }
  }
  void on_fail(client* c, websocketpp::connection_hdl hdl) {
    const auto& conn = c->get_con_from_hdl(hdl);
    blog(LOG_ERROR, "ws failed: %s", conn->get_ec().message().c_str());

    if (status != endpoint_status::closing) {
      connect();
    }
  }
  void on_close(client* c, websocketpp::connection_hdl hdl) {
    const auto& conn = c->get_con_from_hdl(hdl);
    blog(LOG_INFO, "ws closed, code: %d(%s), reason: %s",
         conn->get_remote_close_code(),
         websocketpp::close::status::get_string(conn->get_remote_close_code())
             .c_str(),
         conn->get_remote_close_reason().c_str());

    if (status != endpoint_status::closing) {
      connect();
    }
  }
  void on_message(websocketpp::connection_hdl hdl, client::message_ptr msg) {
    const auto& data = json::parse(msg->get_payload());
    if (data["cmd"].get<int>() == 3) {
      blog(LOG_INFO, "receive gift: %s, %d",
           data["data"]["giftName"].get<std::string>().c_str(),
           data["data"]["num"].get<int>());
      callback(data["data"]["authorName"].get<std::string>(),
               data["data"]["giftName"].get<std::string>(),
               data["data"]["num"].get<int>());
    }
  }
};
}  // namespace AcFun
#endif  // !WEBSOCKET_ENDPOINT