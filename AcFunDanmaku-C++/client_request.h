#pragma once

#include <chrono>

#include "client_utils.h"
#include "enums.h"

namespace AcFunDanmu
{
	class client_request
	{
	public:
		client_request(const int64_t& user_id, std::string service_token,
		               std::vector<CryptoPP::byte> security_key,
		               std::string live_id, std::string enter_room_attach,
		               std::vector<std::string> tickets)
			: user_id_(user_id),
			  service_token_(std::move(service_token)),
			  security_key_(std::move(security_key)),
			  live_id_(std::move(live_id)),
			  enter_room_attach_(std::move(enter_room_attach)),
			  tickets_(std::move(tickets))
		{
		}

		void Register(const int64_t& instance_id, const std::string& session_key,
		              const long& lz4_compression_threshold)
		{
			this->instance_id_ = instance_id;
			this->session_key_ = std::vector<CryptoPP::byte>(session_key.size());
			memcpy(&this->session_key_[0], session_key.data(), session_key.size());
			this->lz4_compression_threshold_ = lz4_compression_threshold;
		}

		[[nodiscard]] const int64_t& get_seq_id() const { return heartbeat_seq_id_; }
		const std::vector<CryptoPP::byte>& get_security_key() { return security_key_; }
		const std::vector<CryptoPP::byte>& get_session_key() { return session_key_; }
		const std::string& next_ticket() { return tickets_[++ticket_index_]; }

		websocket_outgoing_message register_request()
		{
			RegisterRequest reg{};
			auto app = reg.mutable_appinfo();
			auto dev = reg.mutable_deviceinfo();
			auto common = reg.mutable_ztcommoninfo();
			app->set_sdkversion(client_live_sdk_version);
			app->set_linkversion(link_version);
			dev->set_platformtype(DeviceInfo::H5_WINDOWS);
			dev->set_devicemodel("h5");
			common->set_kpn(kpn);
			common->set_kpf(kpf);
			common->set_uid(user_id_);

			reg.set_presencestatus(RegisterRequest::kPresenceOnline);
			reg.set_appactivestatus(RegisterRequest::kAppInForeground);
			reg.set_instanceid(instance_id_);

			const auto& payload = generate_payload(Command::REGISTER, reg.SerializeAsString());
			std::string body;
			payload.SerializeToString(&body);
			//const auto& body = payload.SerializeAsString();

			auto header = generate_header(body);

			const auto token = header.mutable_tokeninfo();
			token->set_tokentype(TokenInfo::kServiceToken);
			token->set_token(service_token_);

			header.set_encryptionmode(
				PacketHeader::kEncryptionServiceToken);

			std::string header_str;
			header.SerializeToString(&header_str);

			seq_id_++;

			return client_utils::encode(header_str, body, security_key_);
		}

		websocket_outgoing_message keep_alive_request()
		{
			KeepAliveRequest kareq;
			kareq.set_presencestatus(RegisterRequest::kPresenceOnline);
			kareq.set_appactivestatus(RegisterRequest::kAppInForeground);

			const auto& payload =
				generate_payload(Command::KEEP_ALIVE, kareq.SerializeAsString());
			const auto& body = payload.SerializeAsString();

			const auto& header = generate_header(body);

			seq_id_++;

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

		websocket_outgoing_message enter_room_request()
		{
			ZtLiveCsEnterRoom enter_room{};
			enter_room.set_enterroomattach(enter_room_attach_);
			enter_room.set_clientlivesdkversion(client_live_sdk_version);

			const auto& cmd = generate_command(GlobalCommand::ENTER_ROOM,
			                                   enter_room.SerializeAsString());

			const auto& payload =
				generate_payload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
			const auto& body = payload.SerializeAsString();

			const auto& header = generate_header(body);

			seq_id_++;

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

		[[nodiscard]] websocket_outgoing_message push_message_response(long long headerSeqId) const
		{
			const auto& payload = generate_payload(Command::PUSH_MESSAGE);
			const auto& body = payload.SerializeAsString();

			auto header = generate_header(body);
			header.set_seqid(headerSeqId);

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

		websocket_outgoing_message heartbeat_request()
		{
			ZtLiveCsHeartbeat heartbeat{};
			heartbeat.set_clienttimestampms(
				std::chrono::duration_cast<std::chrono::milliseconds>(
					std::chrono::system_clock::now().time_since_epoch())
				.count());
			heartbeat.set_sequence(heartbeat_seq_id_);

			const auto& cmd = generate_command(GlobalCommand::HEARTBEAT,
			                                   heartbeat.SerializeAsString());

			const auto& payload =
				generate_payload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
			const auto& body = payload.SerializeAsString();

			const auto& header = generate_header(body);

			heartbeat_seq_id_++;
			seq_id_++;

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

		[[nodiscard]] websocket_outgoing_message user_exit_request() const
		{
			const auto& cmd = generate_command(GlobalCommand::USER_EXIT);

			const auto& payload =
				generate_payload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
			const auto& body = payload.SerializeAsString();

			const auto& header = generate_header(body);

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

		[[nodiscard]] websocket_outgoing_message unregister_request() const
		{
			const auto& payload = generate_payload(Command::UNREGISTER);
			const auto& body = payload.SerializeAsString();

			const auto& header = generate_header(body);

			return client_utils::encode(header.SerializeAsString(), body, session_key_);
		}

	private:
		int64_t user_id_{};
		std::string service_token_{};
		std::vector<CryptoPP::byte> security_key_{};
		std::string live_id_{};
		std::string enter_room_attach_{};
		std::vector<std::string> tickets_{};
		int64_t instance_id_ = 0;
		std::vector<CryptoPP::byte> session_key_;
		int32_t lz4_compression_threshold_{};
		int64_t seq_id_ = 1;
		int64_t heartbeat_seq_id_ = 0;

		int ticket_index_ = 0;
		[[nodiscard]] std::string current_ticket() const { return tickets_[ticket_index_]; }

		[[nodiscard]] ZtLiveCsCmd generate_command(const std::string& command) const
		{
			ZtLiveCsCmd cmd{};
			cmd.set_cmdtype(command);
			cmd.set_ticket(current_ticket());
			cmd.set_liveid(live_id_);
			return cmd;
		}

		[[nodiscard]] ZtLiveCsCmd generate_command(const std::string& command,
		                                           const std::string& msg) const
		{
			auto cmd = generate_command(command);
			cmd.set_payload(msg);
			return cmd;
		}

		[[nodiscard]] UpstreamPayload generate_payload(
			const std::string& command) const
		{
			UpstreamPayload payload{};
			payload.set_command(command);
			payload.set_retrycount(retry_count);
			payload.set_seqid(seq_id_);
			payload.set_subbiz(sub_biz);
			return payload;
		}

		[[nodiscard]] UpstreamPayload generate_payload(const std::string& command,
		                                               const std::string& msg) const
		{
			auto payload = generate_payload(command);
			payload.set_payloaddata(msg);
			return payload;
		}

		[[nodiscard]] PacketHeader generate_header(const std::string& msg) const
		{
			PacketHeader header{};
			header.set_appid(app_id);
			header.set_uid(user_id_);
			header.set_instanceid(instance_id_);
			header.set_encryptionmode(PacketHeader::kEncryptionSessionKey);
			header.set_seqid(seq_id_);
			header.set_kpn(kpn);
			header.set_decodedpayloadlen(static_cast<uint32_t>(msg.length()));
			return header;
		}

		static constexpr uint32_t retry_count = 1;
		static constexpr int32_t app_id = 13;
		inline static const std::string app_name = "link-sdk";
		inline static const std::string sdk_version = "1.4.0.145";
		inline static const std::string kpn = "ACFUN_APP";
		inline static const std::string kpf = "WINDOWS_PC";
		inline static const std::string sub_biz = "mainApp";
		inline static const std::string client_live_sdk_version = "kwai-acfun-live-link";
		inline static const std::string link_version = "2.13.8";
	};
} // namespace AcFunDanmu
