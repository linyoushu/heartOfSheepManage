/*

������֮��,��һ��������Ϸ,
�ڴ��¾�


����Ϊ����,����,����,��������Ϸ



��ϧû�ж���



*/





int main() {
	//linkStart();
	

	showStudio();
	
	
	//����������Ƿ��и���
	checkMainUpdata();

	if (flag)
	{
		//ѯ���Ƿ�����
		askWeather();
		//�������
		if (true)
		{
			downloadMain();
		}
		else
		{
			//���޸�
			cout << "���,,�����²�������," << endl;
			return 0;
		}
	}


	//չʾ����
	showAnnouncement();
	
	

	//��¼������
	//����ע��,��¼����ѡ��.
	//ע��ɹ��򷵻ص�¼����
	
	logIn();
	//�Զ���¼
	
	
	//����ӭ����


	//��һ�����ʼ����������.
	bool firstGame;
	firstData = checkData();
	if (firstGame)
	{
		firstData();
	}
	else
	{
		//�����ȡ��������
		readUserData();
	}
	
	



	//��½�ɹ���չʾ��������
	showTable();
	//��������,��ʾ�û�����鿴
	int flag = 1;
	while (flag) {

		int case_;
		cin >> case_;
		switch (case_) {
		case 1:
			//�ҵķ���
			showMyRoom();
			
			break;
		case 2:
			//봽�
			showRecharge();
			
			break;
		case 3:
			//봽� ͬcase2
			showRecharge();
			
			break;
		case 4:
			//�
			showActivity();
			
			break;
		case 5:
			//����
			showMission();
			
			break;
		case 6:
			//����
			showBag();
			
			break;
		case 7:
			//������
			showLiftPasture();
			
			break;
		case 8:
			//������
			showRightPasture();
			
			break;
		case 9:
			//��������¼�
			showMonster();
			
			break;
		case 10:
			//ħ��
			showMonsters();
			
			break;
		case 11:
			//ս��
			showFormation();
			
			break;
		case 12:
			//������
			showNurturingRoom();
			
			break;
		case 13:
			//����
			showManagePasture();
			
			break;
		case 14:
			//����
			showOutside();
			
			break;
		
		}
	}
}