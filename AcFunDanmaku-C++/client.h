#pragma once

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include <iostream>
#include <unordered_map>
#include <cpprest/http_client.h>
#include <cpprest/json.h>                       // JSON library

#include "gift.h"

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace web::json;                                  // JSON library

class Client
{
public:
	Client(const string_t uperId) :uperId(uperId) {}
	pplx::task<bool> initialize();
	pplx::task<void> updateGiftList();

private:
	int64_t userId{};
	string_t didCookie{};
	string_t did{};
	string_t uperId{};
	string_t serviceToken{};
	string_t securityKey{};
	string_t enterRoomAttach{};
	string_t liveId{};
	std::vector<string_t> tickets{};

	std::unordered_map<int32_t, Gift> giftList{};

	inline static const string_t USER_AGENT = U("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.102 Safari/537.36");

	inline static const string_t HOST = U("https://live.acfun.cn/live/");

	inline static const string_t LOGIN_HOST = U("https://id.app.acfun.cn/rest/app/visitor/login");
	inline static const string_t LOGIN_FORM = U("sid=acfun.api.visitor");

	inline static const string_t KUAISHOU_HOST = U("https://api.kuaishouzt.com");

	inline static const string_t SetCookieHeader = U("Set-Cookie");
	inline static const string_t _did_key = U("_did=");

	inline static const string_t VisitorToken = U("acfun.api.visitor_st");

	static bool isOK(const http_response response) {
		return (&response != nullptr) && response.status_code() == status_codes::OK;
	}
};

