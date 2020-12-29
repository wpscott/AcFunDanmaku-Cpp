#pragma once
#ifndef ACFUN_DANMAKU_HELPER
#define ACFUN_DANMAKU_HELPER

#include <obs-module.h>

#include "http_connection.hpp"

struct HelperSource {
  std::string source;

  std::thread t;
  net::io_context ioc{1};

  HelperSource();
  HelperSource(std::string source);
  ~HelperSource();
  void Update(obs_data_t* settings = nullptr);
};
#endif  //! ACFUN_DANMAKU_HELPER
