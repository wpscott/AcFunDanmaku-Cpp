#pragma once

#include <chrono>

#include "client_utils.h"
#include "enums.h"

namespace AcFunDanmu {
class client_request {
 public:
  client_request(const int64_t& userId, const std::string& serviceToken,
                 const std::vector<CryptoPP::byte>& securityKey,
                 const std::string& liveId, const std::string& enterRoomAttach,
                 const std::vector<std::string>& tickets)
      : userId(userId),
        serviceToken(serviceToken),
        securityKey(securityKey),
        liveId(liveId),
        enterRoomAttach(enterRoomAttach),
        tickets(tickets){};

  void Register(const int64_t& instanceId, const std::string& sessionKey,
                const long& lz4compressionThreshold) {
    this->instanceId = instanceId;
    this->sessionKey = std::vector<CryptoPP::byte>(sessionKey.size());
    memcpy(&this->sessionKey[0], sessionKey.data(), sessionKey.size());
    this->lz4compressionThreshold = lz4compressionThreshold;
  }

  const int64_t& getSeqId() { return heartbeatSeqId; }
  const std::vector<CryptoPP::byte>& getSecurityKey() { return securityKey; }
  const std::vector<CryptoPP::byte>& getSessionKey() { return sessionKey; }
  const std::string& nextTicket() { return tickets[++ticketIndex]; }

  const websocket_outgoing_message RegisterRequest() {
    AcFunDanmu::RegisterRequest reg;
    auto app = reg.mutable_appinfo();
    auto dev = reg.mutable_deviceinfo();
    auto common = reg.mutable_ztcommoninfo();
    app->set_sdkversion(ClientLiveSdkVersion);
    app->set_linkversion(LinkVersion);
    dev->set_platformtype(AcFunDanmu::DeviceInfo::H5_WINDOWS);
    dev->set_devicemodel("h5");
    common->set_kpn(KPN);
    common->set_kpf(KPF);
    common->set_uid(userId);

    reg.set_presencestatus(AcFunDanmu::RegisterRequest::kPresenceOnline);
    reg.set_appactivestatus(AcFunDanmu::RegisterRequest::kAppInForeground);
    reg.set_instanceid(instanceId);

    auto payload = generatePayload(Command::REGISTER, reg.SerializeAsString());
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    auto token = header.mutable_tokeninfo();
    token->set_tokentype(AcFunDanmu::TokenInfo::kServiceToken);
    token->set_token(serviceToken);

    header.set_encryptionmode(
        AcFunDanmu::PacketHeader::kEncryptionServiceToken);

    seqId++;

    return ClientUtils::Encode(header.SerializeAsString(), body, securityKey);
  }

  const websocket_outgoing_message KeepAliveRequest() {
    AcFunDanmu::KeepAliveRequest kareq;
    kareq.set_presencestatus(AcFunDanmu::RegisterRequest::kPresenceOnline);
    kareq.set_appactivestatus(AcFunDanmu::RegisterRequest::kAppInForeground);

    auto payload =
        generatePayload(Command::KEEP_ALIVE, kareq.SerializeAsString());
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    seqId++;

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

  const websocket_outgoing_message EnterRoomRequest() {
    AcFunDanmu::ZtLiveCsEnterRoom enterRoom;
    enterRoom.set_enterroomattach(enterRoomAttach);
    enterRoom.set_clientlivesdkversion(ClientLiveSdkVersion);

    auto cmd = generateCommand(GlobalCommand::ENTER_ROOM,
                               enterRoom.SerializeAsString());

    auto payload =
        generatePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    seqId++;

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

  const websocket_outgoing_message PushMessageResponse(long long headerSeqId) {
    auto payload = generatePayload(Command::PUSH_MESSAGE);
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);
    header.set_seqid(headerSeqId);

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

  const websocket_outgoing_message HeartbeatRequest() {
    ZtLiveCsHeartbeat heartbeat;
    heartbeat.set_clienttimestampms(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch())
            .count());
    heartbeat.set_sequence(heartbeatSeqId);

    auto cmd = generateCommand(GlobalCommand::HEARTBEAT,
                               heartbeat.SerializeAsString());

    auto payload =
        generatePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    heartbeatSeqId++;
    seqId++;

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

  const websocket_outgoing_message UserExitRequest() {
    auto cmd = generateCommand(GlobalCommand::USER_EXIT);

    auto payload =
        generatePayload(Command::GLOBAL_COMMAND, cmd.SerializeAsString());
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

  const websocket_outgoing_message UnregisterRequest() {
    auto payload = generatePayload(Command::UNREGISTER);
    auto body = payload.SerializeAsString();

    auto header = generateHeader(body);

    return ClientUtils::Encode(header.SerializeAsString(), body, sessionKey);
  }

 private:
  int64_t userId{};
  std::string serviceToken{};
  std::vector<CryptoPP::byte> securityKey{};
  std::string liveId{};
  std::string enterRoomAttach{};
  std::vector<std::string> tickets{};
  int64_t instanceId = 0;
  std::vector<CryptoPP::byte> sessionKey;
  int32_t lz4compressionThreshold{};
  int64_t seqId = 1;
  int64_t heartbeatSeqId = 0;

  int ticketIndex = 0;
  const std::string currentTicket() { return tickets[ticketIndex]; }

  const AcFunDanmu::ZtLiveCsCmd generateCommand(const std::string& command) {
    AcFunDanmu::ZtLiveCsCmd cmd;
    cmd.set_cmdtype(command);
    cmd.set_ticket(currentTicket());
    cmd.set_liveid(liveId);
    return cmd;
  }

  const AcFunDanmu::ZtLiveCsCmd generateCommand(const std::string& command,
                                                const std::string& msg) {
    auto cmd = generateCommand(command);
    cmd.set_payload(msg);
    return cmd;
  }

  const AcFunDanmu::UpstreamPayload generatePayload(
      const std::string& command) {
    AcFunDanmu::UpstreamPayload payload;
    payload.set_command(command);
    payload.set_retrycount(retryCount);
    payload.set_seqid(seqId);
    payload.set_subbiz(SubBiz);
    return payload;
  }

  const AcFunDanmu::UpstreamPayload generatePayload(const std::string& command,
                                                    const std::string& msg) {
    auto payload = generatePayload(command);
    payload.set_payloaddata(msg);
    return payload;
  }

  const AcFunDanmu::PacketHeader generateHeader(const std::string& msg) {
    AcFunDanmu::PacketHeader header;
    header.set_appid(AppId);
    header.set_uid(userId);
    header.set_instanceid(instanceId);
    header.set_encryptionmode(AcFunDanmu::PacketHeader::kEncryptionSessionKey);
    header.set_seqid(seqId);
    header.set_kpn(KPN);
    header.set_decodedpayloadlen(msg.length());
    return header;
  }

  static const uint32_t retryCount = 1;
  static const int32_t AppId = 13;
  inline static const std::string AppName = "link-sdk";
  inline static const std::string SdkVersion = "1.2.1";
  inline static const std::string KPN = "ACFUN_APP";
  inline static const std::string KPF = "PC_WEB";
  inline static const std::string SubBiz = "mainApp";
  inline static const std::string ClientLiveSdkVersion = "kwai-acfun-live-link";
  inline static const std::string LinkVersion = "2.13.8";
};
}  // namespace AcFunDanmu