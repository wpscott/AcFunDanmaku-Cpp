#pragma once
#ifndef ACFUN_UTILS
#define ACFUN_UTILS
#include <obs-module.h>
#include <string>
#include <memory>
#include <ctime>
#include <filesystem>
#include <unordered_map>

namespace AcFun {
	namespace Utils {
		inline static bool isNumber(const std::string& str) {
			return !str.empty() && str.find_first_not_of("0123456789") == std::string::npos;
		}
	}
}
#endif  // !ACFUN_UTILS