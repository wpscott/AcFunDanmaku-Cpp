#pragma once

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <gzip/decompress.hpp>
#include <unordered_map>

#include "client_request.h"

namespace AcFunDanmu
{
	using handler = std::function<void(const string_t&, const std::string&, const std::string&)>;

	struct gift
	{
		string_t name{};
		int value{};
		string_t image{};
	};

	class client
	{
	public:
		explicit client(string_t uper_id) : uper_id_(std::move(uper_id))
		{
		}

		pplx::task<bool> initialize()
		{
			http_client client(HOST);
			http_request request(methods::GET);
			request.set_request_uri(uper_id_);
			request.headers().add(header_names::user_agent, USER_AGENT);

			ucout << U("Client initialiing...") << std::endl;

			return client.request(request)
			             .then([&](const http_response& response)
			             {
				             if (!is_ok(response))
				             {
					             ucout << response.extract_string().get() << std::endl;
					             pplx::cancel_current_task();
				             }
				             const auto& headers = response.headers();
				             if (did_cookie_.empty() || did_.empty())
				             {
					             for (auto& [key, value] : headers)
					             {
						             if (key == SetCookieHeader &&
							             value.find(_did_key) != string_t::npos)
						             {
							             did_cookie_ = value;
							             did_ = did_cookie_.substr(
								             _did_key.length(),
								             did_cookie_.find_first_of(';') - _did_key.length());
							             break;
						             }
					             }
				             }

				             http_client client(LOGIN_HOST);

				             http_request request(methods::POST);
				             request.headers().add(header_names::content_type,
				                                   U("application/x-www-form-urlencoded"));
				             request.headers().add(U("Cookie"), did_cookie_);
				             request.headers().add(header_names::user_agent, USER_AGENT);
				             request.headers().add(header_names::referer, HOST + uper_id_);
				             request.set_body(LOGIN_FORM);
				             request.set_request_uri(L"");

				             return client.request(request);
			             })
			             .then([&](const http_response& response)
			             {
				             if (!is_ok(response))
				             {
					             ucout << response.extract_string().get() << std::endl;
					             pplx::cancel_current_task();
				             }
				             const auto& json = response.extract_json().get();
				             if (json.at(U("result")).as_number().to_int32() != 0)
				             {
					             ucout << json << std::endl;
					             pplx::cancel_current_task();
				             }

				             user_id_ = json.at(U("userId")).as_number().to_int64();
				             service_token_ = json.at(VisitorToken).as_string();
				             security_key_ = json.at(U("acSecurity")).as_string();

				             stringstream_t uri_stream;

				             uri_stream << U("/rest/zt/live/web/"
						             "startPlay?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB")
					             << U("&userId=") << user_id_ << U("&did=") << did_ << U("&")
					             << VisitorToken << U("=") << service_token_;

				             http_client client(KUAISHOU_HOST);

				             http_request request(methods::POST);
				             request.headers().add(header_names::content_type,
				                                   U("application/x-www-form-urlencoded"));
				             request.headers().add(U("Cookie"), did_cookie_);
				             request.headers().add(header_names::user_agent, USER_AGENT);
				             request.headers().add(header_names::referer, HOST + uper_id_);
				             request.set_request_uri(uri_stream.str());
				             request.set_body(U("authorId=") + uper_id_);

				             return client.request(request);
			             })
			             .then([&](const http_response& response)
			             {
				             if (!is_ok(response))
				             {
					             ucout << response.extract_string().get() << std::endl;
					             return false;
				             }
				             const auto& json = response.extract_json().get();
				             if (json.at(U("result")).as_number().to_int32() != 1)
				             {
					             ucout << json.at(U("error_msg")).as_string() << std::endl;
					             return false;
				             }
				             const auto& data = json.at(U("data"));
				             auto& available_tickets =
					             data.at(U("availableTickets")).as_array();
				             for (auto& ticket : available_tickets)
				             {
					             tickets_.push_back(
						             conversions::to_utf8string(ticket.as_string()));
				             }
				             enter_room_attach_ =
					             data.at(U("enterRoomAttach")).as_string();
				             live_id_ = data.at(U("liveId")).as_string();

				             ucout << U("Client initialized.") << std::endl;
				             return true;
			             });
		}

		pplx::task<void> update_gift_list()
		{
			http_client client(KUAISHOU_HOST);

			stringstream_t uri_stream;

			uri_stream << U("/rest/zt/live/web/gift/"
					"list?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB")
				<< U("&userId=") << user_id_ << U("&did=") << did_ << U("&")
				<< VisitorToken << U("=") << service_token_;

			stringstream_t body_stream;

			body_stream << U("visitorId=") << user_id_ << U("&liveId=") << live_id_;

			http_request request(methods::POST);
			request.headers().add(header_names::content_type,
			                      U("application/x-www-form-urlencoded"));
			request.headers().add(U("Cookie"), did_cookie_);
			request.headers().add(header_names::user_agent, USER_AGENT);
			request.headers().add(header_names::referer, HOST + uper_id_);
			request.set_request_uri(uri_stream.str());
			request.set_body(body_stream.str());

			return client.request(request).then([=](const http_response& response)
			{
				if (is_ok(response))
				{
					ucout << U("updating gift list") << std::endl;
					if (auto json = response.extract_json().get(); json[U("result")].as_number().to_int32() != 1)
					{
						ucout << json[U("error_msg")].as_string() << std::endl;
					}
					else
					{
						auto& list = json[U("data")][U("giftList")].as_array();
						for (auto& gift : list)
						{
							gift_list_[gift[U("giftId")].as_number().to_int64()] = {
								gift[U("giftName")].as_string(),
								gift[U("giftPrice")].as_number().to_int32(),
								gift[U("webpPicList")].as_array()[0][U("url")].as_string()
							};
						}
						ucout << U("gift list updated") << std::endl;
					}
				}
				else
				{
					ucout << response.extract_string().get() << std::endl;
				}
			});
		}

		const gift* get_gift(const int64_t& gift_id)
		{
			const auto& it = gift_list_.find(gift_id);
			if (it == gift_list_.end())
			{
				return nullptr;
			}
			return &it->second;
		}

		void set_handler(const handler& handler)
		{
			this->handler_ = handler;
		}

		[[nodiscard]] pplx::task<bool> start() const
		{
			auto request =
				client_request(user_id_, conversions::to_utf8string(service_token_),
				               conversions::from_base64(security_key_),
				               conversions::to_utf8string(live_id_),
				               conversions::to_utf8string(enter_room_attach_), tickets_);

			try
			{
				bool running = true;

#ifdef USE_TCP
				boost::asio::io_context io_context;
				tcp::resolver resolver(io_context);
				tcp::resolver::results_type endpoints = resolver.resolve("slink.gifshow.com", "14000");

				tcp::socket socket(io_context);
				boost::asio::connect(socket, endpoints);

				int64_t heartbeat_interval = 0;
				std::thread hbt;
				boost::asio::io_service ios;
				boost::asio::deadline_timer* timer = nullptr;

				const auto& stop = [&]()
				{
					running = false;
					try
					{
						socket.shutdown(boost::asio::socket_base::shutdown_both);
						socket.close();
					}
					catch (const boost::system::system_error& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
					}
					catch (const std::exception& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
					}
					if (timer != nullptr)
					{
						timer->cancel();
						ios.stop();
						if (hbt.joinable())
						{
							hbt.join();
						}
						io_context.stop();
					}
				};

				std::function<void(boost::system::error_code)> heartbeat_handler =
					[&](const boost::system::error_code& error)
				{
					if (error) { stop(); }
					if (!running || timer == nullptr) { stop(); }

					try
					{
						boost::system::error_code err;

						socket.write_some(boost::asio::buffer(request.heartbeat_request()), err);
						if (err == boost::asio::error::eof)
						{
							stop();
						}
						else if (err)
						{
							ucout << conversions::to_string_t(err.what()) << std::endl;
							stop();
						}
						if (request.get_seq_id() % 5 == 4)
						{
							socket.write_some(boost::asio::buffer(request.keep_alive_request()), err);
							if (err == boost::asio::error::eof)
							{
								stop();
							}
							else if (err)
							{
								ucout << conversions::to_string_t(err.what()) << std::endl;
								stop();
							}
						}
						timer->expires_from_now(
							boost::posix_time::milliseconds(heartbeat_interval));
						timer->async_wait(heartbeat_handler);
					}
					catch (const boost::system::error_code& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
					}
					catch (const std::exception& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
						stop();
					}
				};

				buffer_t buf{};
				boost::system::error_code error;

				socket.write_some(boost::asio::buffer(request.handshake_request()), error);
				if (error == boost::asio::error::eof)
				{
					return pplx::task_from_result(false);
				}
				if (error)
				{
					throw boost::system::system_error(error);
				}
				socket.read_some(boost::asio::buffer(buf), error);

				socket.write_some(boost::asio::buffer(request.register_request()), error);

				if (error == boost::asio::error::eof)
				{
					return pplx::task_from_result(false);
				}
				if (error)
				{
					ucout << conversions::to_string_t(error.what()) << std::endl;
					return pplx::task_from_result(false);
				}

				while (running)
				{
					const auto& len = socket.read_some(boost::asio::buffer(buf), error);

					if (error == boost::asio::error::eof)
					{
						return pplx::task_from_result(false);
					}
					if (error)
					{
						ucout << conversions::to_string_t(error.what()) << std::endl;
						return pplx::task_from_result(false);
					}

					const auto& [header, down] = client_utils::decode(buf, request.get_security_key(),
					                                                  request.get_session_key());

					if (const auto& command = down.command(); command == Command::GLOBAL_COMMAND)
					{
						ZtLiveCsCmdAck cmd{};
						cmd.ParseFromString(down.payloaddata());
						if (const auto& cmdAck = cmd.cmdacktype(); cmdAck == GlobalCommand::ENTER_ROOM_ACK)
						{
							ZtLiveCsEnterRoomAck ack{};
							ack.ParseFromString(cmd.payload());
							heartbeat_interval = ack.heartbeatintervalms();

							timer = new boost::asio::deadline_timer(
								ios, boost::posix_time::milliseconds(heartbeat_interval));
							timer->async_wait(heartbeat_handler);
							hbt = std::thread([&] { ios.run(); });
						}
						else if (cmdAck == GlobalCommand::HEARTBEAT_ACK)
						{
						}
						else if (cmdAck == GlobalCommand::USER_EXIT_ACK)
						{
						}
						else
						{
							ucout << U("Unhandled Global.ZtLiveInteractive.CsCmdAck: ")
								<< conversions::to_string_t(cmdAck) << std::endl;
						}
					}
					else if (command == Command::KEEP_ALIVE)
					{
					}
					else if (command == Command::PING)
					{
					}
					else if (command == Command::REGISTER)
					{
						RegisterResponse reg_resp{};
						reg_resp.ParseFromString(down.payloaddata());
						request.Register(
							reg_resp.instanceid(), reg_resp.sesskey(),
							reg_resp.sdkoption().lz4compressionthresholdbytes());

						boost::system::error_code err;
						socket.write_some(boost::asio::buffer(request.keep_alive_request()), err);
						if (err == boost::asio::error::eof)
						{
							stop();
							break;
						}
						if (err) { throw boost::system::system_error(err); }
						socket.write_some(boost::asio::buffer(request.enter_room_request()), err);
						if (err == boost::asio::error::eof)
						{
							stop();
							break;
						}
						if (err) { throw boost::system::system_error(err); }
					}
					else if (command == Command::UNREGISTER)
					{
						stop();
						break;
					}
					else if (command == Command::PUSH_MESSAGE)
					{
						boost::system::error_code err;
						socket.write_some(boost::asio::buffer(request.push_message_response(header.seqid())), err);
						if (err == boost::asio::error::eof)
						{
							stop();
							break;
						}
						if (err) { throw boost::system::system_error(err); }
						ZtLiveScMessage message{};
						message.ParseFromString(down.payloaddata());
						std::string payload = message.payload();
						if (message.compressiontype() ==
							ZtLiveScMessage::GZIP)
						{
							payload = gzip::decompress(payload.data(), payload.length());
						}

						const auto& msgType = message.messagetype();
						if (msgType == PushMessage::ACTION_SIGNAL ||
							msgType == PushMessage::STATE_SIGNAL ||
							msgType == PushMessage::NOTIFY_SIGNAL)
						{
							if (handler_)
							{
								handler_(uper_id_, msgType, payload);
							}
						}
						else if (msgType == PushMessage::STATUS_CHANGED)
						{
							ZtLiveScStatusChanged status_changed{};
							status_changed.ParseFromString(payload);
							if (const auto& type = status_changed.type(); type == ZtLiveScStatusChanged::LIVE_CLOSED
								||
								type == ZtLiveScStatusChanged::LIVE_BANNED)
							{
								stop();
								break;
							}
						}
						else if (msgType == PushMessage::TICKET_INVALID)
						{
							request.next_ticket();
							boost::system::error_code err;
							socket.write_some(boost::asio::buffer(request.enter_room_request()), err);
							if (err == boost::asio::error::eof)
							{
								stop();
								break;
							}
							if (err) { throw boost::system::system_error(err); }
						}
						else
						{
							ucout << U("Unhandled Push.ZtLiveInteractive.Message: ")
								<< conversions::to_string_t(msgType) << std::endl;
						}
					}
					else
					{
						ucout << U("Unhandled command: ")
							<< conversions::to_string_t(command) << std::endl;
					}
				}
				return pplx::task_from_result(true);
			}
			catch (const boost::system::system_error& e)
			{
				ucout << conversions::to_string_t(e.what()) << std::endl;
				return pplx::task_from_result(false);
			}
			catch (const std::exception& e)
			{
				ucout << conversions::to_string_t(e.what()) << std::endl;
				return pplx::task_from_result(false);
			}
#else
				websocket_client client;

				int64_t heartbeat_interval;
				std::thread hbt;
				boost::asio::io_service ios;
				boost::asio::deadline_timer* timer;

				const auto& stop = [&]()
				{
					running = false;
					client.close();
					if (timer)
					{
						timer->cancel();
						ios.stop();
						if (hbt.joinable())
						{
							hbt.join();
						}
					}
				};

				std::function<void(boost::system::error_code)> heartbeat_handler =
					[&](const boost::system::error_code& error)
				{
					if (error) { stop(); }
					if (!running || !timer) { stop(); }

					try
					{
						client.send(request.heartbeat_request());
						if (request.get_seq_id() % 5 == 4)
						{
							client.send(request.keep_alive_request());
						}
						timer->expires_from_now(
							boost::posix_time::milliseconds(heartbeat_interval));
						timer->async_wait(heartbeat_handler);
					}
					catch (const boost::system::error_code& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
					}
					catch (const std::exception& e)
					{
						ucout << conversions::to_string_t(e.what()) << std::endl;
						stop();
					}
				};

				client.connect(WS_HOST).then([&]
				{
					client.send(request.register_request());
				});

				while (running)
				{
					try
					{
						const auto msg = client.receive().get();
						const auto& [header, down] = client_utils::decode(
							msg, request.get_security_key(), request.get_session_key());
						if (const auto& command = down.command(); command == Command::GLOBAL_COMMAND)
						{
							ZtLiveCsCmdAck cmd{};
							cmd.ParseFromString(down.payloaddata());
							if (const auto& cmdAck = cmd.cmdacktype(); cmdAck == GlobalCommand::ENTER_ROOM_ACK)
							{
								ZtLiveCsEnterRoomAck ack{};
								ack.ParseFromString(cmd.payload());
								heartbeat_interval = ack.heartbeatintervalms();

								timer = new boost::asio::deadline_timer(
									ios, boost::posix_time::milliseconds(heartbeat_interval));
								timer->async_wait(heartbeat_handler);
								hbt = std::thread([&] { ios.run(); });
							}
							else if (cmdAck == GlobalCommand::HEARTBEAT_ACK)
							{
							}
							else if (cmdAck == GlobalCommand::USER_EXIT_ACK)
							{
							}
							else
							{
								ucout << U("Unhandled Global.ZtLiveInteractive.CsCmdAck: ")
									<< conversions::to_string_t(cmdAck) << std::endl;
							}
						}
						else if (command == Command::KEEP_ALIVE)
						{
						}
						else if (command == Command::PING)
						{
						}
						else if (command == Command::REGISTER)
						{
							RegisterResponse reg_resp{};
							reg_resp.ParseFromString(down.payloaddata());
							request.Register(
								reg_resp.instanceid(), reg_resp.sesskey(),
								reg_resp.sdkoption().lz4compressionthresholdbytes());

							client.send(request.keep_alive_request());
							client.send(request.enter_room_request());
						}
						else if (command == Command::UNREGISTER)
						{
							stop();
							break;
						}
						else if (command == Command::PUSH_MESSAGE)
						{
							client.send(request.push_message_response(header.seqid()));
							ZtLiveScMessage message{};
							message.ParseFromString(down.payloaddata());
							std::string payload = message.payload();
							if (message.compressiontype() ==
								ZtLiveScMessage::GZIP)
							{
								payload = gzip::decompress(payload.data(), payload.length());
							}

							const auto& msgType = message.messagetype();
							if (msgType == PushMessage::ACTION_SIGNAL ||
								msgType == PushMessage::STATE_SIGNAL ||
								msgType == PushMessage::NOTIFY_SIGNAL)
							{
								if (handler_)
								{
									handler_(uper_id_, msgType, payload);
								}
							}
							else if (msgType == PushMessage::STATUS_CHANGED)
							{
								ZtLiveScStatusChanged status_changed{};
								status_changed.ParseFromString(payload);
								if (const auto& type = status_changed.type(); type == ZtLiveScStatusChanged::LIVE_CLOSED
									||
									type == ZtLiveScStatusChanged::LIVE_BANNED)
								{
									stop();
									break;
								}
							}
							else if (msgType == PushMessage::TICKET_INVALID)
							{
								request.next_ticket();
								client.send(request.enter_room_request());
							}
							else
							{
								ucout << U("Unhandled Push.ZtLiveInteractive.Message: ")
									<< conversions::to_string_t(msgType) << std::endl;
							}
						}
						else
						{
							ucout << U("Unhandled command: ")
								<< conversions::to_string_t(command) << std::endl;
						}
					}
					catch (const websocket_exception& ex)
					{
						ucout << ex.error_code() << ": "
							<< conversions::to_string_t(ex.what()) << std::endl;
						stop();
						return pplx::task_from_result(false);
					}
				}
				return pplx::task_from_result(true);
			}
			catch (const std::exception& e)
			{
				ucout << conversions::to_string_t(e.what()) << std::endl;
				return pplx::task_from_result(false);
			}
#endif
		}

	private:
		static string_t did_cookie_;
		static string_t did_;

		int64_t user_id_{};
		string_t uper_id_{};
		string_t service_token_{};
		string_t security_key_{};
		string_t enter_room_attach_{};
		string_t live_id_{};
		std::vector<std::string> tickets_{};

		handler handler_;

		std::unordered_map<int64_t, gift> gift_list_{};

		inline static const string_t USER_AGENT =
			U(
				"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/102.0.0.0 Safari/537.36");

		inline static const string_t HOST = U("https://live.acfun.cn/live/");

		inline static const string_t LOGIN_HOST =
			U("https://id.app.acfun.cn/rest/app/visitor/login");
		inline static const string_t LOGIN_FORM = U("sid=acfun.api.visitor");

		inline static const string_t KUAISHOU_HOST = U("https://api.kuaishouzt.com");

		inline static const string_t SetCookieHeader = U("Set-Cookie");
		inline static const string_t _did_key = U("_did=");

		inline static const string_t VisitorToken = U("acfun.api.visitor_st");

		inline static const string_t WS_HOST = U("wss://klink-newproduct-ws2.kwaizt.com/");

		static bool is_ok(const http_response& response)
		{
			return response.status_code() == status_codes::OK;
		}
	};
} // namespace AcFunDanmu
string_t AcFunDanmu::client::did_cookie_ = {};
string_t AcFunDanmu::client::did_ = {};
