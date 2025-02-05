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
// 구조체 패딩에 관하여
// 4바이트 단위로 패딩을 하기때문에 사이즈를 절약하기 위해 크기별로 순서를 절약할 수 있다.
// 4바이트보다 작은 short같은 경우는 공간이 남으면 붙여서 사용할 수 있으나
// 4바이트보다 크면 새로운 바이트로 넘어가게 되어 구조체의 메모리상의 크기가 예상한 것보다
// 커질 수 있다. 변수의 순서에 따라 달라질 수 있으니 잘 체크해서 작은사이즈로 최적화 하면 좋을것.


PlayerInfo playerInfo;
MonsterInfo monsterInfo;

void EnterLobby();
void SelectPlayerClass();
void EnterField();
void CreateRandomMonster();
void EnterBattle();

int main()
{
	// 랜덤 시드 설정
	srand(time(0));

	EnterLobby();
	return 0;
}


void EnterLobby()
{
	while (true)
	{
		cout << "---------------------" << endl;
		cout << "로비에 입장했습니다!" << endl;
		cout << "---------------------" << endl;

		SelectPlayerClass();

		cout << "--------------------------" << endl;
		cout << "(1) 필드입장 (2) 게임 종료" << endl;
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
		cout << " 직업을 골라주세요" << endl;
		cout << "(1) 기사 (2) 궁수 (3) 법사" << endl;
		cout << "---------------------" << endl;

		cin >> playerInfo.P_Type;

		switch (playerInfo.P_Type)
		{
		case PC_knight:
			cout << "기사 생성중... !" << endl;
			playerInfo.P_Hp = 150;
			playerInfo.P_Attack = 10;
			playerInfo.P_Defence= 5;
			LoopON = false;
			break;

		case PC_archer:
			cout << "궁수 생성중... !" << endl;
			playerInfo.P_Hp = 100;
			playerInfo.P_Attack = 15;
			playerInfo.P_Defence = 3;
			LoopON = false;
			break;

		case PC_magician:
			cout << "마법사 생성중... !" << endl;
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
		cout << "필드에 입장했습니다!" << endl;
		cout << "--------------------" << endl;


		cout << "[Player] HP : " << playerInfo.P_Hp << " /  ATT :" << playerInfo.P_Attack << "/ DEF :" << playerInfo.P_Defence << endl;
		CreateRandomMonster();

		cout << "--------------------" << endl;
		cout << "(1) 전투 (2) 도주" << endl;
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
		cout << "슬라임 생성중...! (HP:15 / ATT: 5 / DEF: 0" << endl;
		monsterInfo.M_Hp = 15;
		monsterInfo.M_Attack = 5;
		monsterInfo.M_Defence = 0;
		break;
	case MT_Orc:
		cout << "오크 생성중...! (HP:40 / ATT: 10 / DEF: 3" << endl;
		monsterInfo.M_Hp = 40;
		monsterInfo.M_Attack = 10;
		monsterInfo.M_Defence = 3;
		break;
	case MT_SKeleton:
		cout << "스켈레톤 생성중...! (HP:80 / ATT: 15 / DEF: 5" << endl;
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

		cout << "몬스터 남은 체력 : " << monsterInfo.M_Hp << endl;
		if (monsterInfo.M_Hp == 0)
		{	
			cout << "몬스터를 처치했습니다!" << endl;
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
		cout << "플레이어 남은 체력 : " << playerInfo.P_Hp << endl;
		if (playerInfo.P_Hp == 0)
		{
			cout << "당신은 사망했습니다... GAME OVER" << endl;
			return;
		}
	}
}