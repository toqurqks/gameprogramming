#include <iostream>
using namespace std;


// textRPG

enum PlayerClass
{
	PC_knight = 1,
	PC_archer,
	PC_magician
};

enum MonsterType
{
	MT_Slime = 1,
	MT_Orc,
	MT_SKeleton
};

struct PlayerInfo 
{
	int P_Type;
	int P_Hp;
	int P_Attack;
	int P_Defence;
};

struct MonsterInfo
{
	int M_Type;
	int M_Hp;
	int M_Attack;
	int M_Defence;
};
// ����ü �е��� ���Ͽ�
// 4����Ʈ ������ �е��� �ϱ⶧���� ����� �����ϱ� ���� ũ�⺰�� ������ ������ �� �ִ�.
// 4����Ʈ���� ���� short���� ���� ������ ������ �ٿ��� ����� �� ������
// 4����Ʈ���� ũ�� ���ο� ����Ʈ�� �Ѿ�� �Ǿ� ����ü�� �޸𸮻��� ũ�Ⱑ ������ �ͺ���
// Ŀ�� �� �ִ�. ������ ������ ���� �޶��� �� ������ �� üũ�ؼ� ����������� ����ȭ �ϸ� ������.


PlayerInfo playerInfo;
MonsterInfo monsterInfo;

void EnterLobby();
void SelectPlayerClass();
void EnterField();
void CreateRandomMonster();
void EnterBattle();

int main()
{
	// ���� �õ� ����
	srand(time(0));

	EnterLobby();
	return 0;
}


void EnterLobby()
{
	while (true)
	{
		cout << "---------------------" << endl;
		cout << "�κ� �����߽��ϴ�!" << endl;
		cout << "---------------------" << endl;

		SelectPlayerClass();

		cout << "--------------------------" << endl;
		cout << "(1) �ʵ����� (2) ���� ����" << endl;
		cout << "--------------------------" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterField();
		}
		else
		{
			return;
		}
	}
}

void SelectPlayerClass()
{	
	bool LoopON = true;
	while (LoopON)
	{
		cout << "---------------------" << endl;
		cout << " ������ ����ּ���" << endl;
		cout << "(1) ��� (2) �ü� (3) ����" << endl;
		cout << "---------------------" << endl;

		cin >> playerInfo.P_Type;

		switch (playerInfo.P_Type)
		{
		case PC_knight:
			cout << "��� ������... !" << endl;
			playerInfo.P_Hp = 150;
			playerInfo.P_Attack = 10;
			playerInfo.P_Defence= 5;
			LoopON = false;
			break;

		case PC_archer:
			cout << "�ü� ������... !" << endl;
			playerInfo.P_Hp = 100;
			playerInfo.P_Attack = 15;
			playerInfo.P_Defence = 3;
			LoopON = false;
			break;

		case PC_magician:
			cout << "������ ������... !" << endl;
			playerInfo.P_Hp = 80;
			playerInfo.P_Attack = 25;
			playerInfo.P_Defence = 0;
			LoopON = false;
			break;
		
		default:
			break;
		};

		
	}
}

void EnterField() 
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "�ʵ忡 �����߽��ϴ�!" << endl;
		cout << "--------------------" << endl;


		cout << "[Player] HP : " << playerInfo.P_Hp << " /  ATT :" << playerInfo.P_Attack << "/ DEF :" << playerInfo.P_Defence << endl;
		CreateRandomMonster();

		cout << "--------------------" << endl;
		cout << "(1) ���� (2) ����" << endl;
		cout << "> ";

		int input;
		cin >> input;
		if (input == 1)
		{
			EnterBattle();
			if (playerInfo.P_Hp == 0)
				return;
		}
		else
		{
			return; 
		}
	}
}


void CreateRandomMonster()
{
	monsterInfo.M_Type = 1 + (rand() % 3);

	switch (monsterInfo.M_Type)
	{
	case MT_Slime:
		cout << "������ ������...! (HP:15 / ATT: 5 / DEF: 0" << endl;
		monsterInfo.M_Hp = 15;
		monsterInfo.M_Attack = 5;
		monsterInfo.M_Defence = 0;
		break;
	case MT_Orc:
		cout << "��ũ ������...! (HP:40 / ATT: 10 / DEF: 3" << endl;
		monsterInfo.M_Hp = 40;
		monsterInfo.M_Attack = 10;
		monsterInfo.M_Defence = 3;
		break;
	case MT_SKeleton:
		cout << "���̷��� ������...! (HP:80 / ATT: 15 / DEF: 5" << endl;
		monsterInfo.M_Hp = 80;
		monsterInfo.M_Hp = 15;
		monsterInfo.M_Defence = 5;
		break;
	}
}

void EnterBattle()
{
	while (true)
	{
		int damage = playerInfo.P_Attack - monsterInfo.M_Defence;
		if (damage < 0)
			damage = 0;

		monsterInfo.M_Hp -= damage;
		if (monsterInfo.M_Hp < 0)
			monsterInfo.M_Hp = 0;

		cout << "���� ���� ü�� : " << monsterInfo.M_Hp << endl;
		if (monsterInfo.M_Hp == 0)
		{	
			cout << "���͸� óġ�߽��ϴ�!" << endl;
			return;
		}

		damage = monsterInfo.M_Attack - playerInfo.P_Defence;
		if (damage < 0)
			damage = 0;

		playerInfo.P_Hp -= damage;
		if (playerInfo.P_Hp < 0)
		{
			playerInfo.P_Hp = 0;
		}
		cout << "�÷��̾� ���� ü�� : " << playerInfo.P_Hp << endl;
		if (playerInfo.P_Hp == 0)
		{
			cout << "����� ����߽��ϴ�... GAME OVER" << endl;
			return;
		}
	}
}