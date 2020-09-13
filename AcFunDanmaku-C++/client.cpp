#include "client.h"

pplx::task<bool> Client::initialize() {
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

pplx::task<void> Client::updateGiftList() {
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
			auto list = json[U("data")][U("giftList")].as_array();
			for (auto gift : list) {
				Gift info = {
					gift[U("giftName")].as_string(),
					gift[U("giftPrice")].as_number().to_int32(),
					gift[U("webpPicList")].as_array()[0][U("url")].as_string()
				};
				giftList.insert({
					gift[U("giftId")].as_number().to_int32(),
					info
					});
			}
			ucout << U("gift list updated");
		}
		else {
			ucout << response.extract_string().get() << std::endl;
		}
		});
}

//pplx::task<bool> Client::start() {
//	client.connect(WS_HOST);
//	return pplx::task_from_result(false);
//}