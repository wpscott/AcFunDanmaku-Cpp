#pragma once

#include "danmaku_utils.h"
#include "enums.h"

constexpr auto VISITOR_ST = "acfun.api.visitor_st";

namespace AcFun {
namespace Danmaku {
using json = nlohmann::json;

class DanmakuRequest {
 public:
  DanmakuRequest(const json& login, const json& play) {
    security_key =
        Utils::Base64Decode(login["acSecurity"].get<std::string_view>());
    user_id = login["userId"].get<size_t>();
    service_token = login[VISITOR_ST].get<std::string_view>();

    tickets =
        play["data"]["availableTickets"].get<std::vector<std::string_view>>();
    enter_room_attach = play["data"]["enterRoomAttach"].get<std::string_view>();
    live_id = play["data"]["liveId"].get<std::string_view>();
  }

  inline void Register(AcFunDanmu::RegisterResponse& response) {
    instance_id = response.instanceid();
    session_key = response.sesskey();
    lz4compressionThreshold =
        response.sdkoption().lz4compressionthresholdbytes();
  }

  inline const int64_t& GetSeqId() { return heartbeat_seq_id; }
  inline const std::string_view& GetSecurityKey() { return security_key; }
  inline const std::string_view& GetSessionKey() { return session_key; }
  inline const std::string_view& NextTicket() {
    return tickets[++_ticket_index];
  }
  inline void Reset() {
    seq_id = 1;
    heartbeat_seq_id = 0;
    _ticket_index = 0;
  }

  inline void RegisterRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::RegisterRequest req;
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    const auto& app = req.mutable_appinfo();
    const auto& dev = req.mutable_deviceinfo();
    const auto& common = req.mutable_ztcommoninfo();
    app->set_appname(APP_NAME);
    app->set_sdkversion(SDK_VERSION);
    dev->set_platformtype(AcFunDanmu::DeviceInfo::H5);
    dev->set_devicemodel("h5");
    common->set_kpn(KPN);
    common->set_kpf(KPF);
    common->set_uid(user_id);

    req.set_presencestatus(AcFunDanmu::RegisterRequest::kPresenceOnline);
    req.set_appactivestatus(AcFunDanmu::RegisterRequest::kAppInForeground);
    req.set_instanceid(instance_id);

    GeneratePayload(Command::REGISTER, req.SerializeAsString(), payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    const auto& token = header.mutable_tokeninfo();
    token->set_tokentype(AcFunDanmu::TokenInfo::kServiceToken);
    token->set_token(service_token.data());

    header.set_encryptionmode(
        AcFunDanmu::PacketHeader::kEncryptionServiceToken);

    seq_id++;

    Utils::Encode(header.SerializeAsString(), body, security_key, buffer);
  }

  inline void KeepAliveRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::KeepAliveRequest req;
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    req.set_presencestatus(AcFunDanmu::RegisterRequest::kPresenceOnline);
    req.set_appactivestatus(AcFunDanmu::RegisterRequest::kAppInForeground);

    GeneratePayload(Command::KEEP_ALIVE, req.SerializeAsString(), payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    seq_id++;

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }

  inline void EnterRoomRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::ZtLiveCsEnterRoom enter;
    AcFunDanmu::ZtLiveCsCmd cmd;
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    enter.set_enterroomattach(enter_room_attach.data());
    enter.set_clientlivesdkversion(CLIENT_LIVE_SDK_VERSION);

    GenerateCommand(GlobalCommand::ENTER_ROOM, enter.SerializeAsString(), cmd);

    GeneratePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString(), payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }
  inline void PushMessageResponse(const int64_t& header_seq_id,
                                  std::vector<uint8_t>& buffer) {
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    GeneratePayload(Command::PUSH_MESSAGE, payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    header.set_seqid(header_seq_id);

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }
  inline void HeartbeatRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::ZtLiveCsHeartbeat heartbeat;
    AcFunDanmu::ZtLiveCsCmd cmd;
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    heartbeat.set_clienttimestampms(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch())
            .count());

    GenerateCommand(GlobalCommand::HEARTBEAT, heartbeat.SerializeAsString(),
                    cmd);

    GeneratePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString(), payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    heartbeat_seq_id++;
    seq_id++;

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }
  inline void UserExitRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::ZtLiveCsCmd cmd;
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    GenerateCommand(GlobalCommand::USER_EXIT, cmd);

    GeneratePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString(), payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }
  inline void UnregisterRequest(std::vector<uint8_t>& buffer) {
    AcFunDanmu::UpstreamPayload payload;
    AcFunDanmu::PacketHeader header;

    GeneratePayload(Command::UNREGISTER, payload);

    const auto& body = payload.SerializeAsString();

    GenerateHeader(body, header);

    Utils::Encode(header.SerializeAsString(), body, session_key, buffer);
  }

 private:
  int64_t user_id;
  int64_t instance_id = 0;

  std::string_view service_token;
  std::string security_key;
  std::string session_key;
  // std::vector<CryptoPP::byte> security_key;
  // std::vector<CryptoPP::byte> session_key;

  std::string_view live_id;
  std::string_view enter_room_attach;
  std::vector<std::string_view> tickets;

  int32_t lz4compressionThreshold = 0;

  int64_t seq_id = 1;
  int64_t heartbeat_seq_id = 0;

  int _ticket_index = 0;

  inline const std::string_view& CurrentTicket() {
    return tickets[_ticket_index];
  }

  inline void GenerateCommand(const std::string_view& command,
                              AcFunDanmu::ZtLiveCsCmd& cmd) {
    cmd.set_cmdtype(command.data());
    cmd.set_ticket(CurrentTicket().data());
    cmd.set_liveid(live_id.data());
  }

  inline void GenerateCommand(const std::string_view& command,
                              const std::string_view& message,
                              AcFunDanmu::ZtLiveCsCmd& cmd) {
    GenerateCommand(command, cmd);
    cmd.set_payload(message.data());
  }

  inline void GeneratePayload(const std::string_view& command,
                              AcFunDanmu::UpstreamPayload& payload) {
    payload.set_command(command.data());
    payload.set_retrycount(retry_count);
    payload.set_seqid(seq_id);
    payload.set_subbiz(SUB_BIZ);
  }

  inline void GeneratePayload(const std::string_view& command,
                              const std::string_view message,
                              AcFunDanmu::UpstreamPayload& payload) {
    GeneratePayload(command, payload);
    payload.set_payloaddata(message.data());
  }

  inline void GenerateHeader(const std::string_view& message,
                             AcFunDanmu::PacketHeader& header) {
    header.set_appid(APP_ID);
    header.set_uid(user_id);
    header.set_instanceid(instance_id);
    header.set_encryptionmode(AcFunDanmu::PacketHeader::kEncryptionSessionKey);
    header.set_seqid(seq_id);
    header.set_kpn(KPN);
    header.set_decodedpayloadlen(message.size());
  }

  inline static constexpr auto retry_count = 1;
  inline static constexpr auto APP_ID = 13;
  inline static constexpr auto APP_NAME = "link-sdk";
  inline static constexpr auto SDK_VERSION = "1.2.1";
  inline static constexpr auto KPN = "ACFUN_APP";
  inline static constexpr auto KPF = "PC_WEB";
  inline static constexpr auto SUB_BIZ = "mainApp";
  inline static constexpr auto CLIENT_LIVE_SDK_VERSION = "kwai-acfun-live-link";
};
}  // namespace Danmaku
}  // namespace AcFun
