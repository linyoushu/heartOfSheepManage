#include "numDefine.h"
bool checkUpdata() {
	bool flag(0);
	flag = connectServer();
	//�������1 ��˵�����µ�����
	if (flag) {
		return flag;
	}
	else {
		return flag;
	}
}
void showAnnouncement() {
	//����Ƿ������Ÿ���
	bool flag(0);
	flag = checkUpdata();
	//���µ������ز����±�������
	if (flag)
	{
		downloadNews();
		updataNews();
	}
	//��ȡ�������Ų�չʾ

	getAnnouncement();
	listShowAnnouncement();
	cin >> OK;
	while (ok) {
		return OK;
	}
}


