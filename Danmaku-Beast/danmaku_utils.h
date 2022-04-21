#pragma once

#include <cryptopp/aes.h>
#include <cryptopp/ccm.h>
#include <cryptopp/filters.h>
#include <cryptopp/hex.h>
#include <cryptopp/osrng.h>

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/spawn.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/beast/version.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/beast/websocket/ssl.hpp>
#include <boost/certify/extensions.hpp>
#include <boost/certify/https_verification.hpp>
#include <boost/iostreams/copy.hpp>
#include <boost/iostreams/device/array.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/iostreams/stream.hpp>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

#include "AppInfo.pb.h"
#include "CommonActionSignalComment.pb.h"
#include "CommonActionSignalGift.pb.h"
#include "CommonActionSignalLike.pb.h"
#include "CommonActionSignalUserEnterRoom.pb.h"
#include "CommonActionSignalUserFollowAuthor.pb.h"
#include "CommonNotifySignalKickedOut.pb.h"
#include "CommonNotifySignalLiveManagerState.pb.h"
#include "CommonNotifySignalViolationAlert.pb.h"
#include "CommonStateSignalChatAccept.pb.h"
#include "CommonStateSignalChatCall.pb.h"
#include "CommonStateSignalChatEnd.pb.h"
#include "CommonStateSignalChatReady.pb.h"
#include "CommonStateSignalCurrentRedpackList.pb.h"
#include "CommonStateSignalDisplayInfo.pb.h"
#include "CommonStateSignalRecentComment.pb.h"
#include "CommonStateSignalTopUsers.pb.h"
#include "DeviceInfo.pb.h"
#include "DownstreamPayload.pb.h"
#include "KeepAlive.pb.h"
#include "PacketHeader.pb.h"
#include "Register.pb.h"
#include "TokenInfo.pb.h"
#include "Unregister.pb.h"
#include "UpstreamPayload.pb.h"
#include "ZtCommonInfo.pb.h"
#include "ZtLiveCsCmd.pb.h"
#include "ZtLiveCsEnterRoom.pb.h"
#include "ZtLiveCsHeartbeat.pb.h"
#include "ZtLiveCsUserExit.pb.h"
#include "ZtLiveScActionSignal.pb.h"
#include "ZtLiveScMessage.pb.h"
#include "ZtLiveScNotifySignal.pb.h"
#include "ZtLiveScStateSignal.pb.h"
#include "ZtLiveScStatusChanged.pb.h"
#include "ZtLiveScTicketInvalid.pb.h"
#include "acfun.live.pb.h"

namespace beast = boost::beast;          // from <boost/beast.hpp>
namespace http = beast::http;            // from <boost/beast/http.hpp>
namespace websocket = beast::websocket;  // from <boost/beast/websocket.hpp>
namespace net = boost::asio;             // from <boost/asio.hpp>
namespace ssl = net::ssl;                // from <boost/asio/ssl.hpp>
namespace iostreams = boost::iostreams;  // from <boost/iostreams/stream.hpp>
using tcp = net::ip::tcp;                // from <boost/asio/ip/tcp.hpp>

using CryptoPP::AES;
using CryptoPP::AutoSeededRandomPool;
using CryptoPP::CBC_Mode;
using CryptoPP::Exception;
using CryptoPP::HexDecoder;
using CryptoPP::HexEncoder;
using CryptoPP::StreamTransformationFilter;
using CryptoPP::StringSink;
using CryptoPP::StringSource;

using json = nlohmann::json;

namespace AcFun {
namespace Danmaku {
namespace Utils {
inline static constexpr auto HEADER_OFFSET = 12;

inline static void Encrypt(const std::string_view& key,
                           const std::string_view& body, std::string& output) {
  AutoSeededRandomPool prng;
  CryptoPP::SecByteBlock iv{AES::BLOCKSIZE};
  prng.GenerateBlock(iv, AES::BLOCKSIZE);

  CryptoPP::SecByteBlock aeskey{(CryptoPP::byte*)key.data(), key.size()};

  CBC_Mode<AES>::Encryption encryptor{aeskey, aeskey.size(), iv};

  std::string cipher;

  StringSource encrypted{
      body.data(), true,
      new StreamTransformationFilter(encryptor, new StringSink(cipher))};

  std::stringstream ss;
  ss << std::string_view{(const char*)iv.data(), AES::BLOCKSIZE} << cipher;

  output = ss.str();
}

inline static void Decrypt(const std::string_view& key,
                           const std::string_view& data, std::string& output) {
  CryptoPP::SecByteBlock iv{
      (const CryptoPP::byte*)data.substr(0, AES::BLOCKSIZE).data(),
      AES::BLOCKSIZE};
  CryptoPP::SecByteBlock aeskey{(CryptoPP::byte*)key.data(), key.size()};

  CBC_Mode<AES>::Decryption decryptor(aeskey, aeskey.size(), iv);

  StringSource decrypted{
      data.substr(AES::BLOCKSIZE).data(), true,
      new StreamTransformationFilter(decryptor, new StringSink(output))};
}

inline static void length_to_byte(std::vector<uint8_t>& buffer,
                                  const size_t& length) noexcept {
  buffer.push_back((length & 0xFF000000) >> 0x18);
  buffer.push_back((length & 0x00FF0000) >> 0x10);
  buffer.push_back((length & 0x0000FF00) >> 0x08);
  buffer.push_back(length & 0x000000FF);
}

inline static void byte_to_length(const std::string_view& buffer,
                                  const size_t& pos, size_t& output) {
  output += buffer[pos + 3l];
  output += buffer[pos + 2l] << 0x08l;
  output += buffer[pos + 1l] << 0x10l;
  output += buffer[pos] << 0x18l;
}

inline static void Encode(const std::string_view& header,
                          const std::string_view& body,
                          const std::string_view& key,
                          std::vector<uint8_t>& buffer) {
  std::string encrypted;
  Encrypt(key, body, encrypted);

  buffer =
      std::vector<uint8_t>(HEADER_OFFSET + header.size() + encrypted.size());

  buffer.push_back(0xAB);
  buffer.push_back(0xCD);
  buffer.push_back(0x00);
  buffer.push_back(0x01);
  length_to_byte(buffer, header.size());
  length_to_byte(buffer, encrypted.size());
  std::copy(header.begin(), header.end(), std::back_inserter(buffer));
  std::copy(encrypted.begin(), encrypted.end(), std::back_inserter(buffer));
}

inline static void Decode(const std::string_view& message,
                          const std::string_view& securityKey,
                          const std::string_view& sessionKey,
                          AcFunDanmu::PacketHeader& header,
                          AcFunDanmu::DownstreamPayload down) {
  size_t headerlen = 0, payloadlen = 0;
  byte_to_length(message, 4, headerlen);
  byte_to_length(message, 8, payloadlen);

  header.ParseFromArray(&message[HEADER_OFFSET], headerlen);
  const auto& encryptionMode = header.encryptionmode();
  if (encryptionMode != AcFunDanmu::PacketHeader::kEncryptionNone) {
    const auto& payload = std::string_view(
        (const char*)&message[HEADER_OFFSET + headerlen], payloadlen);
    std::string decrypted;
    Decrypt(encryptionMode == AcFunDanmu::PacketHeader::kEncryptionServiceToken
                ? securityKey
                : sessionKey,
            payload, decrypted);

    if (decrypted.length() != header.decodedpayloadlen()) {
      throw "Invalid payload length";
    }

    down.ParseFromString(decrypted);
  } else {
    if (payloadlen != header.decodedpayloadlen()) {
      throw "Invalid payload length";
    }
    down.ParseFromArray(&message[HEADER_OFFSET + headerlen], payloadlen);
  }
}

inline static const std::string Base64Decode(const std::string_view& data) {
  std::string dest;
  dest.resize(beast::detail::base64::decoded_size(data.size()));
  const auto& result =
      beast::detail::base64::decode(&dest[0], data.data(), data.size());
  dest.resize(result.first);
  return std::move(dest);
}

}  // namespace Utils
}  // namespace Danmaku
}  // namespace AcFun
