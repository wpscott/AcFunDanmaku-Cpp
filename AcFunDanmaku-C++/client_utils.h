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

#include <numeric>
#include <tuple>

#include "Im/AppInfo.pb.h"
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
#include "Im/DeviceInfo.pb.h"
#include "Im/DownstreamPayload.pb.h"
#include "Im/KeepAliveRequest.pb.h"
#include "Im/KeepAliveResponse.pb.h"
#include "Im/PacketHeader.pb.h"
#include "Im/RegisterRequest.pb.h"
#include "Im/RegisterResponse.pb.h"
#include "Im/TokenInfo.pb.h"
#include "Im/UnregisterRequest.pb.h"
#include "Im/UnregisterResponse.pb.h"
#include "Im/UpstreamPayload.pb.h"
#include "Im/ZtCommonInfo.pb.h"
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

using namespace utility; // Common utilities like string conversions
using namespace web; // Common features like URIs.
using namespace http; // Common HTTP functionality
using namespace client; // HTTP client features
using namespace concurrency::streams; // Asynchronous streams
using namespace http::experimental::listener; // HTTP server
using namespace websockets::client; // WebSockets client
using namespace json; // JSON library

using namespace AcFunDanmu::Im::Basic;

namespace client_utils
{
	static constexpr int header_offset = 12;

	static std::string encrypt(const std::vector<CryptoPP::byte>& key,
	                           const std::string& body) noexcept
	{
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
		ss << std::string(reinterpret_cast<const char*>(iv.data()), iv.size()) << cipher;

		return ss.str();
	}

	static std::string decrypt(const std::vector<CryptoPP::byte>& key,
	                           const std::string& data) noexcept
	{
		CryptoPP::SecByteBlock iv(
			reinterpret_cast<const CryptoPP::byte*>(data.substr(0, AES::BLOCKSIZE).data()),
			AES::BLOCKSIZE);
		CryptoPP::SecByteBlock aeskey(&key[0], key.size());

		CBC_Mode<AES>::Decryption decryptor(aeskey, aeskey.size(), iv);

		std::string recovered;

		StringSource decrypted(
			data.substr(AES::BLOCKSIZE), true,
			new StreamTransformationFilter(decryptor, new StringSink(recovered)));

		return recovered;
	}

	static void convert_length(std::vector<uint8_t>& buffer,
	                           const int& offset,
	                           const size_t& length) noexcept
	{
		buffer[offset + 0] = (length & 0xFF000000) >> 24;
		buffer[offset + 1] = (length & 0x00FF0000) >> 16;
		buffer[offset + 2] = (length & 0x0000FF00) >> 8;
		buffer[offset + 3] = length & 0x000000FF;
	}

	static websocket_outgoing_message encode(
		const std::string& header, const std::string& body,
		const std::vector<CryptoPP::byte>& key) noexcept
	{
		const auto& encrypted = encrypt(key, body);

		std::vector<uint8_t> buf(header_offset + header.length() + encrypted.length());
		buf[0] = 0xAB;
		buf[1] = 0xCD;
		buf[2] = 0x00;
		buf[3] = 0x01;
		convert_length(buf, 4, header.length());
		convert_length(buf, 8, encrypted.length());
		std::copy(header.begin(), header.end(), buf.begin() + header_offset);
		std::copy(encrypted.begin(), encrypted.end(), buf.begin() + header_offset + header.length());

		producer_consumer_buffer<uint8_t> buffer;
		const auto& length = buffer.putn_nocopy(&buf[0], buf.size()).get();

		websocket_outgoing_message msg;
		msg.set_binary_message(buffer.create_istream(), length);

		return msg;
	}

	static std::tuple<PacketHeader, DownstreamPayload>
	decode(const websocket_incoming_message& message,
	       const std::vector<CryptoPP::byte>& security_key,
	       const std::vector<CryptoPP::byte>& session_key) noexcept
	{
		const auto& is = message.body();
		const auto& length = message.length();

		const container_buffer<std::vector<uint8_t>> buffer;
		is.read_to_end(static_cast<streambuf<unsigned char>>(buffer)).wait();

		const auto& data = buffer.collection();

		auto convertor = [](const uint32_t& l, const uint32_t& r) { return (l << 8) + r; };

		const auto& header_len = std::accumulate(data.begin() + 4, data.begin() + 8, 0, convertor);
		const auto& payload_len = std::accumulate(data.begin() + 8, data.begin() + 12, 0, convertor);

		PacketHeader header{};
		DownstreamPayload down{};
		header.ParseFromArray(&data[header_offset], header_len);
		if (const auto encryption_mode = header.encryptionmode(); encryption_mode !=
			PacketHeader::kEncryptionNone)
		{
			const auto payload =
				std::string(reinterpret_cast<const char*>(&data[header_offset + header_len]), payload_len);
			const auto& decrypted = decrypt(
				encryption_mode == PacketHeader::kEncryptionServiceToken
					? security_key
					: session_key,
				payload);

			if (decrypted.length() != header.decodedpayloadlen())
			{
				throw "Invalid payload length";
			}

			down.ParseFromString(decrypted);
		}
		else
		{
			if (payload_len != header.decodedpayloadlen())
			{
				throw "Invalid payload length";
			}
			down.ParseFromArray(&data[header_offset + header_len], payload_len);
		}
		return std::make_tuple(std::move(header), std::move(down));
	}
} // namespace ClientUtils
