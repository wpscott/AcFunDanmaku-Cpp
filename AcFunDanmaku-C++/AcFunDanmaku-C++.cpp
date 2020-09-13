// AcFunDanmaku-C++.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "client.h"

int main()
{
	Client client(U("3568347"));
	try {
		auto result = client.initialize().get() ? U("success") : U("failed");
		ucout << result << std::endl;
		client.updateGiftList().wait();
	}
	catch (http_exception const& e) {
		ucout << U("http exception: ") << e.error_code() << e.what() << std::endl;
	}
	catch (json_exception const& e) {
		ucout << U("json exception: ") << e.what() << std::endl;
	}
	catch (std::exception const& e) {
		ucout << U("exception: ") << e.what() << std::endl << "Task Cancelled" << std::endl;
	}
	catch (...) {
		ucout << "Task Cancelled" << std::endl;
	}
	return 0;
}