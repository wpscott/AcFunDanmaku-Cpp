#pragma once

#include <librdkafka/rdkafka.h>

#include <memory>

namespace AcFunDanmu {
class Producer {
 public:
 private:
  static std::unique_ptr<rd_kafka_conf_t> conf;
};
}  // namespace AcFunDanmu

std::unique_ptr<rd_kafka_conf_t> AcFunDanmu::Producer::conf =
    std::make_unique<rd_kafka_conf_t>(rd_kafka_conf_new());