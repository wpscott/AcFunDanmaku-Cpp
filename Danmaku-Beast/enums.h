#pragma once

namespace AcFun {
namespace Danmaku {
namespace Command {
inline static constexpr auto REGISTER = "Basic.Register";
inline static constexpr auto UNREGISTER = "Basic.Unregister";
inline static constexpr auto KEEP_ALIVE = "Basic.KeepAlive";
inline static constexpr auto PING = "Basic.Ping";
inline static constexpr auto CLIENT_CONFIG_GET = "Basic.ClientConfigGet";

inline static constexpr auto MESSAGE_SESSION = "Message.Session";
inline static constexpr auto MESSAGE_PULL_OLD = "Message.PullOld";
inline static constexpr auto GROUP_USER_GROUP_LIST = "Group.UserGroupList";

inline static constexpr auto GLOBAL_COMMAND = "Global.ZtLiveInteractive.CsCmd";

inline static constexpr auto PUSH_MESSAGE = "Push.ZtLiveInteractive.Message";
};  // namespace Command

namespace GlobalCommand {
inline static constexpr auto ENTER_ROOM = "ZtLiveCsEnterRoom";
inline static constexpr auto ENTER_ROOM_ACK = "ZtLiveCsEnterRoomAck";
inline static constexpr auto HEARTBEAT = "ZtLiveCsHeartbeat";
inline static constexpr auto HEARTBEAT_ACK = "ZtLiveCsHeartbeatAck";
inline static constexpr auto USER_EXIT = "ZtLiveCsUserExit";
inline static constexpr auto USER_EXIT_ACK = "ZtLiveCsUserExitAck";
};  // namespace GlobalCommand

namespace PushMessage {
inline static constexpr auto ACTION_SIGNAL = "ZtLiveScActionSignal";
inline static constexpr auto STATE_SIGNAL = "ZtLiveScStateSignal";
inline static constexpr auto NOTIFY_SIGNAL = "ZtLiveScNotifySignal";
inline static constexpr auto STATUS_CHANGED = "ZtLiveScStatusChanged";
inline static constexpr auto TICKET_INVALID = "ZtLiveScTicketInvalid";

namespace ActionSignal {
inline static constexpr auto COMMENT = "CommonActionSignalComment";
inline static constexpr auto LIKE = "CommonActionSignalLike";
inline static constexpr auto ENTER_ROOM = "CommonActionSignalUserEnterRoom";
inline static constexpr auto FOLLOW = "CommonActionSignalUserFollowAuthor";
inline static constexpr auto THROW_BANANA = "AcfunActionSignalThrowBanana";
inline static constexpr auto GIFT = "CommonActionSignalGift";
inline static constexpr auto RICH_TEXT = "CommonActionSignalRichText";
};  // namespace ActionSignal

namespace StateSignal {
inline static constexpr auto ACFUN_DISPLAY_INFO = "AcfunStateSignalDisplayInfo";
inline static constexpr auto DISPLAY_INFO = "CommonStateSignalDisplayInfo";
inline static constexpr auto TOP_USRES = "CommonStateSignalTopUsers";
inline static constexpr auto RECENT_COMMENT = "CommonStateSignalRecentComment";
inline static constexpr auto CHAT_CALL = "CommonStateSignalChatCall";
inline static constexpr auto CHAT_ACCEPT = "CommonStateSignalChatAccept";
inline static constexpr auto CHAT_READY = "CommonStateSignalChatReady";
inline static constexpr auto CHAT_END = "CommonStateSignalChatEnd";
inline static constexpr auto CURRENT_RED_PACK_LIST =
    "CommonStateSignalCurrentRedpackList";
inline static constexpr auto AUTHOR_CHAT_CALL =
    "CommonStateSignalAuthorChatCall";
inline static constexpr auto AUTHOR_CHAT_ACCEPT =
    "CommonStateSignalAuthorChatAccept";
inline static constexpr auto AUTHOR_CHAT_READY =
    "CommonStateSignalAuthorChatReady";
inline static constexpr auto AUTHOR_CHAT_END = "CommonStateSignalAuthorChatEnd";
inline static constexpr auto AUTHOR_CHAT_CHANGE_SOUND_CONFIG =
    "CommonStateSignalAuthorChatChangeSoundConfig";
}  // namespace StateSignal

namespace NotifySignal {
inline static constexpr auto KICKED_OUT = "CommonNotifySignalKickedOut";
inline static constexpr auto VIOLATION_ALERT =
    "CommonNotifySignalViolationAlert";
inline static constexpr auto LIVE_MANAGER_STATE =
    "CommonNotifySignalLiveManagerState";
}  // namespace NotifySignal
};  // namespace PushMessage
}  // namespace Danmaku
}  // namespace AcFun