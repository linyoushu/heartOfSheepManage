/*

牧羊人之心,是一款休闲游戏,
在此致敬


主题为养成,休闲,娱乐,的文字游戏



可惜没有动画



*/





int main() {
	//linkStart();
	

	showStudio();
	
	
	//检查主程序是否有更新
	checkMainUpdata();

	if (flag)
	{
		//询问是否下载
		askWeather();
		//如果下载
		if (true)
		{
			downloadMain();
		}
		else
		{
			//待修改
			cout << "这个,,不更新不可以玩," << endl;
			return 0;
		}
	}


	//展示公告
	showAnnouncement();
	
	

	//登录服务器
	//包含注册,登录两个选项.
	//注册成功则返回登录界面
	
	logIn();
	//自动登录
	
	
	//并欢迎界面


	//第一次则初始化本地数据.
	bool firstGame;
	firstData = checkData();
	if (firstGame)
	{
		firstData();
	}
	else
	{
		//否则读取本地数据
		readUserData();
	}
	
	



	//登陆成功则展示牧场资料
	showTable();
	//交互界面,提示用户输入查看
	int flag = 1;
	while (flag) {

		int case_;
		cin >> case_;
		switch (case_) {
		case 1:
			//我的房间
			showMyRoom();
			
			break;
		case 2:
			//氪金
			showRecharge();
			
			break;
		case 3:
			//氪金 同case2
			showRecharge();
			
			break;
		case 4:
			//活动
			showActivity();
			
			break;
		case 5:
			//任务
			showMission();
			
			break;
		case 6:
			//背包
			showBag();
			
			break;
		case 7:
			//左牧场
			showLiftPasture();
			
			break;
		case 8:
			//右牧场
			showRightPasture();
			
			break;
		case 9:
			//点击怪物事件
			showMonster();
			
			break;
		case 10:
			//魔物
			showMonsters();
			
			break;
		case 11:
			//战阵
			showFormation();
			
			break;
		case 12:
			//培育室
			showNurturingRoom();
			
			break;
		case 13:
			//管理
			showManagePasture();
			
			break;
		case 14:
			//出门
			showOutside();
			
			break;
		
		}
	}
}