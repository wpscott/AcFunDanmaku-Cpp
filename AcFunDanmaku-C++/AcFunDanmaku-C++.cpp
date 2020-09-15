// AcFunDanmaku-C++.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "client.h"

int main()
{
	AcFunDanmu::Client client(U("31541670"));
	try {
		auto result = client.initialize().get() ? U("success") : U("failed");
		ucout << result << std::endl;
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
							std::cout
								<< comment.sendtimems()
								<< " - " << comment.userinfo().nickname()
								<< "(" << comment.userinfo().userid() << "): " << comment.content()
								<< std::endl;
						}
					}
					else if (type == PushMessage::ActionSignal::LIKE) {
						for (const auto& pl : item.payload()) {
							AcFunDanmu::CommonActionSignalLike like;
							like.ParseFromString(pl);
							std::cout
								<< like.sendtimems()
								<< " - " << like.userinfo().nickname()
								<< "(" << like.userinfo().userid() << ") liked"
								<< std::endl;
						}
					}
					else if (type == PushMessage::ActionSignal::ENTER_ROOM) {
						for (const auto& pl : item.payload()) {
							AcFunDanmu::CommonActionSignalUserEnterRoom enterroom;
							enterroom.ParseFromString(pl);
							std::cout << enterroom.sendtimems()
								<< " - " << enterroom.userinfo().nickname()
								<< "(" << enterroom.userinfo().userid() << ") entered"
								<< std::endl;
						}
					}
					else if (type == PushMessage::ActionSignal::FOLLOW) {
						for (const auto& pl : item.payload()) {
							AcFunDanmu::CommonActionSignalUserFollowAuthor follow;
							follow.ParseFromString(pl);
							std::cout << follow.sendtimems()
								<< " - " << follow.userinfo().nickname()
								<< "(" << follow.userinfo().userid() << ") followed author"
								<< std::endl;
						}
					}
					else if (type == PushMessage::ActionSignal::GIFT) {
						for (const auto& pl : item.payload()) {
							AcFunDanmu::CommonActionSignalGift gift;
							const auto& giftInfo = client.getGift(gift.giftid());
							gift.ParseFromString(pl);
							std::cout << gift.sendtimems()
								<< " - " << gift.user().nickname()
								<< "(" << gift.user().userid() << ") sent gift "
								<< conversions::to_utf8string(giftInfo.name)
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
							std::cout
								<< comment.sendtimems()
								<< " - " << comment.userinfo().nickname()
								<< "(" << comment.userinfo().userid() << "): " << comment.content()
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
	catch (http_exception const& e) {
		std::cout << "http exception:" << e.error_code() << e.what() << std::endl;
	}
	catch (json_exception const& e) {
		std::cout << "json exception: " << e.what() << std::endl;
	}
	catch (std::exception const& e) {
		std::cout << "exception: " << e.what() << std::endl << "Task Cancelled" << std::endl;
	}
	catch (...) {
		std::cout << "Task Cancelled" << std::endl;
	}
	return 0;
}