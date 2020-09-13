#pragma once

#include "Models/PacketHeader.pb.h"
#include "Models/Register.pb.h"
#include "Models/AppInfo.pb.h"
#include "Models/DeviceInfo.pb.h"
#include "Models/ZtCommonInfo.pb.h"
#include "Models/TokenInfo.pb.h"
#include "Models/ZtLiveCsEnterRoom.pb.h"
#include "Models/KeepAlive.pb.h"
#include "Models/ZtLiveCsHeartbeat.pb.h"
#include "Models/Unregister.pb.h"
#include "Models/ZtLiveCsUserExit.pb.h"
#include "Models/ZtLiveCsCmd.pb.h"
#include "Models/UpstreamPayload.pb.h"
#include "Models/DownstreamPayload.pb.h"

class client_request
{

private:
	long userId{};
	std::string serviceToken{};
	std::string securityKey{};
	std::string liveId{};
	std::string enterRoomAttach{};
	std::vector<std::string> tickets{};
	long instanceId{};
	long heartbeatSeqId = 1;

	int ticketIndex = 0;
	std::string currentTicket() { return tickets[ticketIndex]; }
	std::string nextTicket() { return tickets[++ticketIndex]; }

	static const int retryCount = 1;
	static const int AppId = 13;
	inline static const std::string AppName = "link-sdk";
	inline static const std::string SdkVersion = "1.2.1";
	inline static const std::string KPN = "ACFUN_APP";
	inline static const std::string KPF = "PC_WEB";
	inline static const std::string SubBiz = "mainApp";
	inline static const std::string ClientLiveSdkVersion = "kwai-acfun-live-link";
};

