#include "client.h"

// From https://stackoverflow.com/a/49622513
#ifndef MS_STDLIB_BUGS
#  if ( _MSC_VER || __MINGW32__ || __MSVCRT__ )
#    define MS_STDLIB_BUGS 1
#  else
#    define MS_STDLIB_BUGS 0
#  endif
#endif

#if MS_STDLIB_BUGS
#  include <io.h>
#  include <fcntl.h>
#endif

void init_locale(void)
{
#if MS_STDLIB_BUGS
	constexpr char cp_utf16le[] = ".1200";
	setlocale(LC_ALL, cp_utf16le);
	int result = _setmode(_fileno(stdout), _O_WTEXT);
	if (result == -1) {
		std::cout << "Cannot set mode" << std::endl;
	}
#else
	// The correct locale name may vary by OS, e.g., "en_US.utf8".
	//constexpr char locale_name[] = "";
	//setlocale(LC_ALL, locale_name);
	//std::locale::global(std::locale(locale_name));
	//std::wcin.imbue(std::locale())
	//std::wcout.imbue(std::locale());
#endif
}

int main(int argc, char** argv)
{
	init_locale();
	try {
		if (argc != 2) { ucout << U("参数错误") << std::endl; return -1; }
		AcFunDanmu::Client client(conversions::to_string_t(argv[1]));

		if (client.initialize().get()) {
			client.updateGiftList().wait();
			client.set_handler([&](const std::string& type, const std::string& payload) {
				if (type == PushMessage::ACTION_SIGNAL) {
					AcFunDanmu::ZtLiveScActionSignal signal;
					signal.ParseFromString(payload);
					for (const auto& item : signal.item()) {
						const auto& type = item.signaltype();
						if (type == PushMessage::ActionSignal::COMMENT) {
							for (const auto& pl : item.payload()) {
								AcFunDanmu::CommonActionSignalComment comment;
								comment.ParseFromString(pl);
								ucout
									<< comment.sendtimems()
									<< " - " << conversions::to_string_t(comment.userinfo().nickname())
									<< "(" << comment.userinfo().userid() << "): " << conversions::to_string_t(comment.content())
									<< std::endl;
							}
						}
						else if (type == PushMessage::ActionSignal::LIKE) {
							for (const auto& pl : item.payload()) {
								AcFunDanmu::CommonActionSignalLike like;
								like.ParseFromString(pl);
								ucout
									<< like.sendtimems()
									<< " - " << conversions::to_string_t(like.userinfo().nickname())
									<< "(" << like.userinfo().userid() << ") liked"
									<< std::endl;
							}
						}
						else if (type == PushMessage::ActionSignal::ENTER_ROOM) {
							for (const auto& pl : item.payload()) {
								AcFunDanmu::CommonActionSignalUserEnterRoom enterroom;
								enterroom.ParseFromString(pl);
								ucout << enterroom.sendtimems()
									<< " - " << conversions::to_string_t(enterroom.userinfo().nickname())
									<< "(" << enterroom.userinfo().userid() << ") entered"
									<< std::endl;
							}
						}
						else if (type == PushMessage::ActionSignal::FOLLOW) {
							for (const auto& pl : item.payload()) {
								AcFunDanmu::CommonActionSignalUserFollowAuthor follow;
								follow.ParseFromString(pl);
								ucout << follow.sendtimems()
									<< " - " << conversions::to_string_t(follow.userinfo().nickname())
									<< "(" << follow.userinfo().userid() << ") followed author"
									<< std::endl;
							}
						}
						else if (type == PushMessage::ActionSignal::GIFT) {
							for (const auto& pl : item.payload()) {
								AcFunDanmu::CommonActionSignalGift gift;
								const auto& giftInfo = client.getGift(gift.giftid());
								gift.ParseFromString(pl);
								ucout << gift.sendtimems()
									<< " - " << conversions::to_string_t(gift.user().nickname())
									<< "(" << gift.user().userid() << ") sent gift "
									<< giftInfo.name
									<< " × " << gift.count()
									<< ", combo: " << gift.combo()
									<< ", value: " << gift.value()
									<< std::endl;
							}
						}
						else if (type == PushMessage::ActionSignal::THROW_BANANA) {}
						else if (type == PushMessage::NotifySignal::KICKED_OUT) {}
						else if (type == PushMessage::NotifySignal::VIOLATION_ALERT) {}
						else if (type == PushMessage::NotifySignal::LIVE_MANAGER_STATE) {}
						else {
							std::cout << "Unhandled action signal: " << type << std::endl;
						}
					}
				}
				else if (type == PushMessage::STATE_SIGNAL) {
					AcFunDanmu::ZtLiveScStateSignal signal;
					signal.ParseFromString(payload);
					for (const auto& item : signal.item()) {
						const auto& type = item.signaltype();
						if (type == PushMessage::StateSignal::ACFUN_DISPLAY_INFO) {

						}
						else if (type == PushMessage::StateSignal::DISPLAY_INFO) {

						}
						else if (type == PushMessage::StateSignal::TOP_USRES) {

						}
						else if (type == PushMessage::StateSignal::RECENT_COMMENT) {
							AcFunDanmu::CommonStateSignalRecentComment comments;
							comments.ParseFromString(item.payload());
							for (const auto& comment : comments.comment()) {
								ucout
									<< comment.sendtimems()
									<< " - " << conversions::to_string_t(comment.userinfo().nickname())
									<< "(" << comment.userinfo().userid() << "): " << conversions::to_string_t(comment.content())
									<< std::endl;
							}
						}
						else if (type == PushMessage::StateSignal::CHAT_CALL) {
						}
						else if (type == PushMessage::StateSignal::CHAT_ACCEPT) {
						}
						else if (type == PushMessage::StateSignal::CHAT_READY) {
						}
						else if (type == PushMessage::StateSignal::CHAT_END) {
						}
						else if (type == PushMessage::StateSignal::CURRENT_RED_PACK_LIST) {
						}
						else {
							std::cout << "Unhandled state signal: " << type << std::endl;
						}

					}
				}
				else if (type == PushMessage::NOTIFY_SIGNAL) {
					AcFunDanmu::ZtLiveScNotifySignal signal;
					signal.ParseFromString(payload);
					for (const auto& item : signal.item()) {
						const auto& type = item.signaltype();
						if (type == PushMessage::NotifySignal::KICKED_OUT) {}
						else if (type == PushMessage::NotifySignal::VIOLATION_ALERT) {}
						else if (type == PushMessage::NotifySignal::LIVE_MANAGER_STATE) {}
						else {
							std::cout << "Unhandled notify signal: " << type << std::endl;
						}
					}
				}
				});
			client.start().wait();
		}
	}
	catch (const http_exception& e) {
		std::cout << "http exception:" << e.error_code() << e.what() << std::endl;
	}
	catch (const json_exception& e) {
		std::cout << "json exception: " << e.what() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "exception: " << e.what() << std::endl << "Task Cancelled" << std::endl;
	}
	catch (...) {
		std::cout << "Task Cancelled" << std::endl;
	}
	return 0;
}