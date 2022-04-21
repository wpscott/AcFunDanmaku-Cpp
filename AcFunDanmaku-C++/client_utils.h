#pragma once

#include <cpprest/containerstream.h>  // Async streams backed by STL containers
#include <cpprest/filestream.h>
#include <cpprest/http_client.h>
#include <cpprest/http_listener.h>  // HTTP server
#include <cpprest/interopstream.h>  // Bridges for integrating Async streams with STL and WinRT streams
#include <cpprest/json.h>                    // JSON library
#include <cpprest/producerconsumerstream.h>  // Async streams for producer consumer scenarios
#include <cpprest/rawptrstream.h>  // Async streams backed by raw pointer to memory
#include <cpprest/uri.h>           // URI library
#include <cpprest/ws_client.h>     // WebSocket client
#include <cryptopp/aes.h>
#include <cryptopp/ccm.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/filters.h>
#include <cryptopp/hex.h>
#include <cryptopp/osrng.h>

#include <tuple>

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

using CryptoPP::AES;
using CryptoPP::AutoSeededRandomPool;
using CryptoPP::CBC_Mode;
using CryptoPP::Exception;
using CryptoPP::HexDecoder;
using CryptoPP::HexEncoder;
using CryptoPP::StreamTransformationFilter;
using CryptoPP::StringSink;
using CryptoPP::StringSource;

using namespace utility;            // Common utilities like string conversions
using namespace web;                // Common features like URIs.
using namespace web::http;          // Common HTTP functionality
using namespace web::http::client;  // HTTP client features
using namespace concurrency::streams;               // Asynchronous streams
using namespace web::http::experimental::listener;  // HTTP server
using namespace web::websockets::client;            // WebSockets client
using namespace web::json;                          // JSON library

namespace ClientUtils {
static constexpr int HeaderOffset = 12;

const static inline std::string Encrypt(const std::vector<CryptoPP::byte>& key,
                                        const std::string& body) {
  AutoSeededRandomPool prng;
  CryptoPP::SecByteBlock iv(AES::BLOCKSIZE);
  prng.GenerateBlock(iv, iv.size());

  CryptoPP::SecByteBlock aeskey(&key[0], key.size());

  CBC_Mode<AES>::Encryption encryptor(aeskey, aeskey.size(), iv);

  std::string cipher;

  StringSource encrypted(
      body, true,
      new StreamTransformationFilter(encryptor, new StringSink(cipher)));

  std::stringstream ss;
  ss << std::string((const char*)iv.data(), iv.size()) << cipher;

  return ss.str();
}

const static inline std::string Decrypt(const std::vector<CryptoPP::byte>& key,
                                        const std::string& data) {
  CryptoPP::SecByteBlock iv(
      (const CryptoPP::byte*)data.substr(0, AES::BLOCKSIZE).data(),
      AES::BLOCKSIZE);
  CryptoPP::SecByteBlock aeskey(&key[0], key.size());

  CBC_Mode<AES>::Decryption decryptor(aeskey, aeskey.size(), iv);

  std::string recovered;

  StringSource decrypted(
      data.substr(AES::BLOCKSIZE), true,
      new StreamTransformationFilter(decryptor, new StringSink(recovered)));

  return recovered;
}

static inline void convertLength(std::vector<uint8_t>& buffer,
                                 const size_t& length) {
  buffer.push_back((length & 0xFF000000) >> 24);
  buffer.push_back((length & 0x00FF0000) >> 16);
  buffer.push_back((length & 0x0000FF00) >> 8);
  buffer.push_back(length & 0x000000FF);
}

const static inline websocket_outgoing_message Encode(
    const std::string& header, const std::string& body,
    const std::vector<CryptoPP::byte>& key) {
  auto encrypted = Encrypt(key, body);

  std::vector<uint8_t> buf;
  buf.push_back(0xAB);
  buf.push_back(0xCD);
  buf.push_back(0x00);
  buf.push_back(0x01);
  convertLength(buf, header.length());
  convertLength(buf, encrypted.length());
  std::copy(header.begin(), header.end(), std::back_inserter(buf));
  std::copy(encrypted.begin(), encrypted.end(), std::back_inserter(buf));

  producer_consumer_buffer<uint8_t> buffer;
  auto length = buffer.putn_nocopy(&buf[0], buf.size()).get();

  websocket_outgoing_message msg;
  msg.set_binary_message(buffer.create_istream(), length);

  return msg;
}

const static inline std::tuple<AcFunDanmu::PacketHeader,
                               AcFunDanmu::DownstreamPayload>
Decode(const websocket_incoming_message& message,
       const std::vector<CryptoPP::byte>& securityKey,
       const std::vector<CryptoPP::byte>& sessionKey) {
  const auto& is = message.body();
  const auto& length = message.length();

  container_buffer<std::vector<uint8_t>> buffer;
  is.read_to_end(buffer).wait();

  const auto& data = buffer.collection();

  size_t headerlen = 0, payloadlen = 0;
  headerlen += ((size_t)data[7]);
  headerlen += ((size_t)data[6] << 8);
  headerlen += ((size_t)data[5] << 16);
  headerlen += ((size_t)data[4] << 24);
  payloadlen += ((size_t)data[11]);
  payloadlen += ((size_t)data[10] << 8);
  payloadlen += ((size_t)data[9] << 16);
  payloadlen += ((size_t)data[8] << 24);

  AcFunDanmu::PacketHeader header;
  AcFunDanmu::DownstreamPayload down;
  header.ParseFromArray(&data[HeaderOffset], headerlen);
  auto encryptionMode = header.encryptionmode();
  if (encryptionMode != AcFunDanmu::PacketHeader::kEncryptionNone) {
    auto payload =
        std::string((const char*)&data[HeaderOffset + headerlen], payloadlen);
    auto decrypted = Decrypt(
        encryptionMode == AcFunDanmu::PacketHeader::kEncryptionServiceToken
            ? securityKey
            : sessionKey,
        payload);

    if (decrypted.length() != header.decodedpayloadlen()) {
      throw "Invalid payload length";
    }

    down.ParseFromString(decrypted);
  } else {
    if (payloadlen != header.decodedpayloadlen()) {
      throw "Invalid payload length";
    }
    down.ParseFromArray(&data[HeaderOffset + headerlen], payloadlen);
  }
  return std::make_tuple(std::move(header), std::move(down));
}
}  // namespace ClientUtils