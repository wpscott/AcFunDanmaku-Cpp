#define USE_TCP
#include "client.h"

// From https://stackoverflow.com/a/49622513
#ifndef MS_STDLIB_BUGS
#if (_MSC_VER || __MINGW32__ || __MSVCRT__)
#define MS_STDLIB_BUGS 1
#else
#define MS_STDLIB_BUGS 0
#endif
#endif

#if MS_STDLIB_BUGS
#include <fcntl.h>
#include <io.h>
#endif

void init_locale(void)
{
#if MS_STDLIB_BUGS
	constexpr char cp_utf16le[] = ".1200";
	setlocale(LC_ALL, cp_utf16le);
	const int result = _setmode(_fileno(stdout), _O_WTEXT);
	if (result == -1)
	{
		ucout << "Cannot set mode" << std::endl;
	}
#else
	// The correct locale name may vary by OS, e.g., "en_US.utf8".
	// constexpr char locale_name[] = "";
	// setlocale(LC_ALL, locale_name);
	// std::locale::global(std::locale(locale_name));
	// std::wcin.imbue(std::locale())
	// std::wcout.imbue(std::locale());
#endif
}

int main(const int argc, char** argv)
{
	init_locale();
	try
	{
		if (argc != 2)
		{
			ucout << U("参数错误") << std::endl;
			return -1;
		}

		if (AcFunDanmu::client client(conversions::to_string_t(argv[1])); client.initialize().get())
		{
			client.update_gift_list().wait();
			client.set_handler([&](const string_t& uper_id, const std::string& type,
			                       const std::string& payload)
			{
				try
				{
					if (type == PushMessage::ACTION_SIGNAL)
					{
						AcFunDanmu::ZtLiveScActionSignal signal{};
						signal.ParseFromString(payload);
						for (const auto& item : signal.item())
						{
							if (const auto& item_type = item.signaltype(); item_type ==
								PushMessage::ActionSignal::COMMENT)
							{
								for (const auto& pl : item.payload())
								{
									AcFunDanmu::CommonActionSignalComment comment{};
									comment.ParseFromString(pl);
									ucout << comment.sendtimems() << " - "
										<< conversions::to_string_t(
											comment.userinfo().nickname())
										<< "(" << comment.userinfo().userid()
										<< "): " << conversions::to_string_t(comment.content())
										<< std::endl;
								}
							}
							else if (item_type == PushMessage::ActionSignal::LIKE)
							{
								for (const auto& pl : item.payload())
								{
									AcFunDanmu::CommonActionSignalLike like{};
									like.ParseFromString(pl);
									ucout << like.sendtimems() << " - "
										<< conversions::to_string_t(like.userinfo().nickname())
										<< "(" << like.userinfo().userid() << ") liked"
										<< std::endl;
								}
							}
							else if (item_type == PushMessage::ActionSignal::ENTER_ROOM)
							{
								for (const auto& pl : item.payload())
								{
									AcFunDanmu::CommonActionSignalUserEnterRoom enter{};
									enter.ParseFromString(pl);
									ucout << enter.sendtimems() << " - "
										<< conversions::to_string_t(
											enter.userinfo().nickname())
										<< "(" << enter.userinfo().userid() << ") entered"
										<< std::endl;
								}
							}
							else if (item_type == PushMessage::ActionSignal::FOLLOW)
							{
								for (const auto& pl : item.payload())
								{
									AcFunDanmu::CommonActionSignalUserFollowAuthor follow{};
									follow.ParseFromString(pl);
									ucout << follow.sendtimems() << " - "
										<< conversions::to_string_t(
											follow.userinfo().nickname())
										<< "(" << follow.userinfo().userid()
										<< ") followed author" << std::endl;
								}
							}
							else if (item_type == PushMessage::ActionSignal::GIFT)
							{
								for (const auto& pl : item.payload())
								{
									AcFunDanmu::CommonActionSignalGift gift{};
									gift.ParseFromString(pl);
									const auto& giftId = gift.giftid();
									const auto& giftInfo = client.get_gift(giftId);
									if (giftInfo == nullptr)
									{
										ucout << U("cannot gift id: " << giftId << std::endl;)
									}
									else
									{
										gift.ParseFromString(pl);
										ucout << gift.sendtimems() << " - "
											<< conversions::to_string_t(gift.userinfo().nickname())
											<< "(" << gift.userinfo().userid() << ") sent gift "
											<< giftInfo->name << U(" × ") << gift.batchsize()
											<< ", combo: " << gift.combocount()
											<< ", value: " << gift.rank() << std::endl;
									}
								}
							}
							else if (item_type == PushMessage::ActionSignal::THROW_BANANA)
							{
							}
							else if (item_type == PushMessage::NotifySignal::KICKED_OUT)
							{
							}
							else if (item_type == PushMessage::NotifySignal::VIOLATION_ALERT)
							{
							}
							else if (item_type ==
								PushMessage::NotifySignal::LIVE_MANAGER_STATE)
							{
							}
							else
							{
								ucout << "Unhandled action signal: "
									<< conversions::to_string_t(item_type) << std::endl;
							}
						}
					}
					else if (type == PushMessage::STATE_SIGNAL)
					{
						AcFunDanmu::ZtLiveScStateSignal signal{};
						signal.ParseFromString(payload);
						for (const auto& item : signal.item())
						{
							if (const auto& item_type = item.signaltype(); item_type ==
								PushMessage::StateSignal::ACFUN_DISPLAY_INFO)
							{
							}
							else if (item_type == PushMessage::StateSignal::DISPLAY_INFO)
							{
							}
							else if (item_type == PushMessage::StateSignal::TOP_USRES)
							{
							}
							else if (item_type == PushMessage::StateSignal::RECENT_COMMENT)
							{
								AcFunDanmu::CommonStateSignalRecentComment comments{};
								comments.ParseFromString(item.payload());
								for (const auto& comment : comments.comment())
								{
									ucout << comment.sendtimems() << " - "
										<< conversions::to_string_t(
											comment.userinfo().nickname())
										<< "(" << comment.userinfo().userid()
										<< "): " << conversions::to_string_t(comment.content())
										<< std::endl;
								}
							}
							else if (item_type == PushMessage::StateSignal::CHAT_CALL)
							{
							}
							else if (item_type == PushMessage::StateSignal::CHAT_ACCEPT)
							{
							}
							else if (item_type == PushMessage::StateSignal::CHAT_READY)
							{
							}
							else if (item_type == PushMessage::StateSignal::CHAT_END)
							{
							}
							else if (item_type ==
								PushMessage::StateSignal::CURRENT_RED_PACK_LIST)
							{
							}
							else if (item_type == PushMessage::StateSignal::AR_LIVE_TREASURE_BOX_STATE)
							{
							}
							else
							{
								ucout << U("Unhandled state signal: ")
									<< conversions::to_string_t(item_type) << std::endl;
							}
						}
					}
					else if (type == PushMessage::NOTIFY_SIGNAL)
					{
						AcFunDanmu::ZtLiveScNotifySignal signal{};
						signal.ParseFromString(payload);
						for (const auto& item : signal.item())
						{
							if (const auto& item_type = item.signaltype(); item_type ==
								PushMessage::NotifySignal::KICKED_OUT)
							{
							}
							else if (item_type == PushMessage::NotifySignal::VIOLATION_ALERT)
							{
							}
							else if (item_type ==
								PushMessage::NotifySignal::LIVE_MANAGER_STATE)
							{
							}
							else
							{
								ucout << U("Unhandled notify signal: ")
									<< conversions::to_string_t(item_type) << std::endl;
							}
						}
					}
				}
				catch (const std::exception& e)
				{
					ucout << conversions::to_string_t(e.what()) << std::endl;
				}
			});
			const auto& result = client.start().get();
		}
	}
	catch (const http_exception& e)
	{
		ucout << "http exception:" << e.error_code() << e.what() << std::endl;
	} catch (const json_exception& e)
	{
		ucout << "json exception: " << e.what() << std::endl;
	} catch (const std::exception& e)
	{
		ucout << "exception: " << e.what() << std::endl
			<< "Task Cancelled" << std::endl;
	} catch (...)
	{
		ucout << "Task Cancelled" << std::endl;
	}
	return 0;
}
