#pragma once

#include <string>

namespace Command {
inline static const std::string REGISTER = "Basic.Register";
inline static const std::string UNREGISTER = "Basic.Unregister";
inline static const std::string KEEP_ALIVE = "Basic.KeepAlive";
inline static const std::string PING = "Basic.Ping";
inline static const std::string CLIENT_CONFIG_GET = "Basic.ClientConfigGet";

inline static const std::string MESSAGE_SESSION = "Message.Session";
inline static const std::string MESSAGE_PULL_OLD = "Message.PullOld";
inline static const std::string GROUP_USER_GROUP_LIST = "Group.UserGroupList";

inline static const std::string GLOBAL_COMMAND =
    "Global.ZtLiveInteractive.CsCmd";

inline static const std::string PUSH_MESSAGE = "Push.ZtLiveInteractive.Message";
};  // namespace Command

namespace GlobalCommand {
inline static const std::string ENTER_ROOM = "ZtLiveCsEnterRoom";
inline static const std::string ENTER_ROOM_ACK = "ZtLiveCsEnterRoomAck";
inline static const std::string HEARTBEAT = "ZtLiveCsHeartbeat";
inline static const std::string HEARTBEAT_ACK = "ZtLiveCsHeartbeatAck";
inline static const std::string USER_EXIT = "ZtLiveCsUserExit";
inline static const std::string USER_EXIT_ACK = "ZtLiveCsUserExitAck";
};  // namespace GlobalCommand

namespace PushMessage {
inline static const std::string ACTION_SIGNAL = "ZtLiveScActionSignal";
inline static const std::string STATE_SIGNAL = "ZtLiveScStateSignal";
inline static const std::string NOTIFY_SIGNAL = "ZtLiveScNotifySignal";
inline static const std::string STATUS_CHANGED = "ZtLiveScStatusChanged";
inline static const std::string TICKET_INVALID = "ZtLiveScTicketInvalid";

namespace ActionSignal {
inline static const std::string COMMENT = "CommonActionSignalComment";
inline static const std::string LIKE = "CommonActionSignalLike";
inline static const std::string ENTER_ROOM = "CommonActionSignalUserEnterRoom";
inline static const std::string FOLLOW = "CommonActionSignalUserFollowAuthor";
inline static const std::string THROW_BANANA = "AcfunActionSignalThrowBanana";
inline static const std::string GIFT = "CommonActionSignalGift";
inline static const std::string RICH_TEXT = "CommonActionSignalRichText";
};  // namespace ActionSignal

namespace StateSignal {
inline static const std::string ACFUN_DISPLAY_INFO =
    "AcfunStateSignalDisplayInfo";
inline static const std::string DISPLAY_INFO = "CommonStateSignalDisplayInfo";
inline static const std::string TOP_USRES = "CommonStateSignalTopUsers";
inline static const std::string RECENT_COMMENT =
    "CommonStateSignalRecentComment";
inline static const std::string CHAT_CALL = "CommonStateSignalChatCall";
inline static const std::string CHAT_ACCEPT = "CommonStateSignalChatAccept";
inline static const std::string CHAT_READY = "CommonStateSignalChatReady";
inline static const std::string CHAT_END = "CommonStateSignalChatEnd";
inline static const std::string CURRENT_RED_PACK_LIST =
    "CommonStateSignalCurrentRedpackList";
inline static const std::string AUTHOR_CHAT_CALL =
    "CommonStateSignalAuthorChatCall";
inline static const std::string AUTHOR_CHAT_ACCEPT =
    "CommonStateSignalAuthorChatAccept";
inline static const std::string AUTHOR_CHAT_READY =
    "CommonStateSignalAuthorChatReady";
inline static const std::string AUTHOR_CHAT_END =
    "CommonStateSignalAuthorChatEnd";
inline static const std::string AUTHOR_CHAT_CHANGE_SOUND_CONFIG =
    "CommonStateSignalAuthorChatChangeSoundConfig";
}  // namespace StateSignal

namespace NotifySignal {
inline static const std::string KICKED_OUT = "CommonNotifySignalKickedOut";
inline static const std::string VIOLATION_ALERT =
    "CommonNotifySignalViolationAlert";
inline static const std::string LIVE_MANAGER_STATE =
    "CommonNotifySignalLiveManagerState";
}  // namespace NotifySignal
};  // namespace PushMessage