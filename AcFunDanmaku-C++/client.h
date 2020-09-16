#pragma once

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include <unordered_map>

#include <boost/system/error_code.hpp>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include <gzip/decompress.hpp>

#include "client_request.h"

namespace AcFunDanmu {
	struct Gift {
		string_t name{};
		int value{};
		string_t image{};
	};

	class Client
	{
	public:
		Client(const string_t& uperId) :uperId(uperId) {}
		pplx::task<bool> initialize() {
			http_client client(HOST);
			http_request request(methods::GET);
			request.set_request_uri(uperId);
			request.headers().add(header_names::user_agent, USER_AGENT);

			ucout << U("Client initialiing...") << std::endl;

			return client.request(request).then([&](http_response response) {
				if (!isOK(response)) {
					ucout << response.extract_string().get() << std::endl;
					pplx::cancel_current_task();
				}
				else {
					auto headers = response.headers();
					for (auto [key, value] : headers) {
						if (key == SetCookieHeader && value.find(_did_key) != string_t::npos) {
							didCookie = value;
							did = didCookie.substr(_did_key.length(), didCookie.find_first_of(';') - _did_key.length());
							break;
						}
					}
					http_client client(LOGIN_HOST);

					http_request request(methods::POST);
					request.headers().add(header_names::content_type, U("application/x-www-form-urlencoded"));
					request.headers().add(U("Cookie"), didCookie);
					request.headers().add(header_names::user_agent, USER_AGENT);
					request.headers().add(header_names::referer, HOST + uperId);
					request.set_body(LOGIN_FORM);

					return client.request(request);
				}}).then([&](http_response response) {
					if (!isOK(response)) {
						ucout << response.extract_string().get() << std::endl;
						pplx::cancel_current_task();
					}
					else {
						auto json = response.extract_json().get();
						if (json[U("result")].as_number().to_int32() != 0) {
							ucout << json << std::endl;
							pplx::cancel_current_task();
						}

						userId = json[U("userId")].as_number().to_int64();
						serviceToken = json[VisitorToken].as_string();
						securityKey = json[U("acSecurity")].as_string();

						stringstream_t uri_stream;

						uri_stream << U("/rest/zt/live/web/startPlay?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB") << U("&userId=") << userId << U("&did=") << did << U("&") << VisitorToken << U("=") << serviceToken;

						http_client client(KUAISHOU_HOST);

						http_request request(methods::POST);
						request.headers().add(header_names::content_type, U("application/x-www-form-urlencoded"));
						request.headers().add(U("Cookie"), didCookie);
						request.headers().add(header_names::user_agent, USER_AGENT);
						request.headers().add(header_names::referer, HOST + uperId);
						request.set_request_uri(uri_stream.str());
						request.set_body(U("authorId=") + uperId);

						return client.request(request);
					}}).then([&](http_response response) {
						if (!isOK(response)) {
							ucout << response.extract_string().get() << std::endl;
							return false;
						}
						else {
							auto json = response.extract_json().get();
							if (json[U("result")].as_number().to_int32() != 1) {
								ucout << json[U("error_msg")].as_string() << std::endl;
								return false;
							}
							else {
								auto _tickets = json[U("data")][U("availableTickets")].as_array();
								for (auto ticket : _tickets) {
									tickets.push_back(conversions::to_utf8string(ticket.as_string()));
								}
								enterRoomAttach = json[U("data")][U("enterRoomAttach")].as_string();
								liveId = json[U("data")][U("liveId")].as_string();

								ucout << U("Client initialized.") << std::endl;
								return true;
							}
						}});
		}
		pplx::task<void> updateGiftList() {
			http_client client(KUAISHOU_HOST);

			stringstream_t uri_stream;

			uri_stream << U("/rest/zt/live/web/gift/list?subBiz=mainApp&kpn=ACFUN_APP&kpf=PC_WEB") << U("&userId=") << userId << U("&did=") << did << U("&") << VisitorToken << U("=") << serviceToken;

			stringstream_t body_stream;

			body_stream << U("visitorId=") << userId << U("&liveId=") << liveId;

			http_request request(methods::POST);
			request.headers().add(header_names::content_type, U("application/x-www-form-urlencoded"));
			request.headers().add(U("Cookie"), didCookie);
			request.headers().add(header_names::user_agent, USER_AGENT);
			request.headers().add(header_names::referer, HOST + uperId);
			request.set_request_uri(uri_stream.str());
			request.set_body(body_stream.str());

			return client.request(request).then([=](http_response response) {
				if (isOK(response)) {
					ucout << U("updating gift list") << std::endl;
					auto json = response.extract_json().get();
					if (json[U("result")].as_number().to_int32() != 1) {
						ucout << json[U("error_msg")].as_string() << std::endl;
					}
					else {
						auto list = json[U("data")][U("giftList")].as_array();
						for (auto gift : list) {
							giftList[gift[U("giftId")].as_number().to_int64()] =
							{
								gift[U("giftName")].as_string(),
								gift[U("giftPrice")].as_number().to_int32(),
								gift[U("webpPicList")].as_array()[0][U("url")].as_string()
							};
						}
						ucout << U("gift list updated") << std::endl;
					}
				}
				else {
					ucout << response.extract_string().get() << std::endl;
				}
				});
		}

		const Gift* getGift(int64_t giftId) { const auto& it = giftList.find(giftId); if (it == giftList.end()) { return nullptr; } else { return &it->second; } }


		void set_handler(const std::function<void(const std::string&, const std::string&)>& handler) {
			this->handler = handler;
		}

		pplx::task<bool> start() {
			auto request = client_request(
				userId,
				conversions::to_utf8string(serviceToken),
				conversions::from_base64(securityKey),
				conversions::to_utf8string(liveId),
				conversions::to_utf8string(enterRoomAttach),
				tickets);

			try {
				bool running = true;
				websocket_client client;
				client.connect(WS_HOST).then([&]() {
					return client.send(request.RegisterRequest()).then([]() {
						});
					}).wait();
					const auto& msg = client.receive().get();
					const auto& [header, down] = ClientUtils::Decode(msg, request.getSecurityKey(), request.getSessionKey());
					AcFunDanmu::RegisterResponse regresp;
					regresp.ParseFromString(down.payloaddata());

					request.Register(regresp.instanceid(), regresp.sesskey(), regresp.sdkoption().lz4compressionthresholdbytes());

					client.send(request.KeepAliveRequest(true)).wait();

					client.send(request.EnterRoomRequest()).wait();

					int64_t heartbeatinterval;
					std::thread hbt;
					boost::asio::io_service ios;
					boost::asio::deadline_timer* timer;

					const auto& stop = [&]() {
						running = false;
						client.close();
						if (timer) {
							timer->cancel();
							ios.stop();
							if (hbt.joinable()) {
								hbt.join();
							}
						}
					};

					std::function<void(boost::system::error_code)> hbhandler = [&](const boost::system::error_code& error) {
						if (!error) {
							if (running && timer) {
								try {
									client.send(request.HeartbeatRequest()).wait();
									client.send(request.KeepAliveRequest()).wait();
									timer->expires_from_now(boost::posix_time::milliseconds(heartbeatinterval));
									timer->async_wait(hbhandler);
								}
								catch (const std::exception& e) {
									ucout << conversions::to_string_t(e.what()) << std::endl;
									stop();
								}
							}
							else {
								stop();
							}
						}
						else {
							stop();
						}
					};

					while (running) {
						try {
							const auto msg = client.receive().get();
							const auto& [header, down] = ClientUtils::Decode(msg, request.getSecurityKey(), request.getSessionKey());
							const auto& command = down.command();
							if (command == Command::GLOBAL_COMMAND) {
								AcFunDanmu::ZtLiveCsCmdAck cmd;
								cmd.ParseFromString(down.payloaddata());
								const auto& cmdack = cmd.cmdacktype();
								if (cmdack == GlobalCommand::ENTER_ROOM_ACK) {
									AcFunDanmu::ZtLiveCsEnterRoomAck ack;
									ack.ParseFromString(cmd.payload());
									heartbeatinterval = std::move(ack.heartbeatintervalms());

									timer = new boost::asio::deadline_timer(ios, boost::posix_time::milliseconds(heartbeatinterval));
									timer->async_wait(hbhandler);
									hbt = std::thread([&] {ios.run(); });
								}
								else if (cmdack == GlobalCommand::HEARTBEAT_ACK) {

								}
								else if (cmdack == GlobalCommand::USER_EXIT_ACK) {

								}
								else {
									ucout << U("Unhandled Global.ZtLiveInteractive.CsCmdAck: ") << conversions::to_string_t(cmdack) << std::endl;
								}
							}
							else if (command == Command::KEEP_ALIVE) {

							}
							else if (command == Command::PING) {

							}
							else if (command == Command::UNREGISTER) {
								stop();
								break;
							}
							else if (command == Command::PUSH_MESSAGE) {
								client.send(request.PushMessageResponse(header.seqid())).wait();
								AcFunDanmu::ZtLiveScMessage message;
								message.ParseFromString(down.payloaddata());
								std::string payload = message.payload();
								if (message.compressiontype() == AcFunDanmu::ZtLiveScMessage::GZIP) {
									payload = gzip::decompress(payload.data(), payload.length());
								}

								const auto& msgType = message.messagetype();
								if (msgType == PushMessage::ACTION_SIGNAL || msgType == PushMessage::STATE_SIGNAL || msgType == PushMessage::NOTIFY_SIGNAL) {
									if (handler) {
										handler(msgType, std::move(payload));
									}
								}
								else if (msgType == PushMessage::STATUS_CHANGED) {
									ZtLiveScStatusChanged statusChanged;
									statusChanged.ParseFromString(payload);
									const auto& type = statusChanged.type();
									if (type == AcFunDanmu::ZtLiveScStatusChanged::LIVE_CLOSED || type == AcFunDanmu::ZtLiveScStatusChanged::LIVE_BANNED) {
										stop();
										break;
									}
								}
								else if (msgType == PushMessage::TICKET_INVALID) {
									request.nextTicket();
									client.send(request.EnterRoomRequest()).wait();
								}
								else {
									ucout << U("Unhandled Push.ZtLiveInteractive.Message: ") << conversions::to_string_t(msgType) << std::endl;
								}
							}
							else {
								ucout << U("Unhandled command: ") << conversions::to_string_t(command) << std::endl;
							}
						}
						catch (const websocket_exception& ex) {
							ucout << ex.error_code() << ": " << conversions::to_string_t(ex.what()) << std::endl;
							stop();
							return pplx::task_from_result(false);
						}
					}
					return pplx::task_from_result(true);
			}
			catch (const std::exception& e) {
				ucout << conversions::to_string_t(e.what()) << std::endl;
				return pplx::task_from_result(false);
			}
		}

	private:
		int64_t userId{};
		string_t didCookie{};
		string_t did{};
		string_t uperId{};
		string_t serviceToken{};
		string_t securityKey{};
		string_t enterRoomAttach{};
		string_t liveId{};
		std::vector<std::string> tickets{};

		std::function<void(const std::string&, const std::string&)> handler;

		std::unordered_map<int64_t, Gift> giftList{};

		inline static const string_t USER_AGENT = U("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.102 Safari/537.36");

		inline static const string_t HOST = U("https://live.acfun.cn/live/");

		inline static const string_t LOGIN_HOST = U("https://id.app.acfun.cn/rest/app/visitor/login");
		inline static const string_t LOGIN_FORM = U("sid=acfun.api.visitor");

		inline static const string_t KUAISHOU_HOST = U("https://api.kuaishouzt.com");

		inline static const string_t SetCookieHeader = U("Set-Cookie");
		inline static const string_t _did_key = U("_did=");

		inline static const string_t VisitorToken = U("acfun.api.visitor_st");

		inline static const string_t WS_HOST = U("wss://link.xiatou.com/");

		static bool isOK(const http_response response) {
			return response.status_code() == status_codes::OK;
		}
	};
}