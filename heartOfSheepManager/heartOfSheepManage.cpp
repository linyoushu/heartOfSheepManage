#include "numDefine.h"
bool checkUpdata() {
	bool flag(0);
	flag = connectServer();
	//如果返回1 则说明有新的新闻
	if (flag) {
		return flag;
	}
	else {
		return flag;
	}
}
void showAnnouncement() {
	//检查是否有新闻更新
	bool flag(0);
	flag = checkUpdata();
	//有新的则下载并更新本地新闻
	if (flag)
	{
		downloadNews();
		updataNews();
	}
	//获取本地新闻并展示

	getAnnouncement();
	listShowAnnouncement();
	cin >> OK;
	while (ok) {
		return OK;
	}
}


