#include <iostream>
using namespace std;

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void EnterLobby();
StatInfo CreatePlayer();
void CreateMonster(StatInfo* info);
// 플레이어 승리시 true, 아니면 false
bool StartBattle(StatInfo* player, StatInfo* monster);

int main()
{
	// 랜덤 시드 설정
	srand(time(0));

	EnterLobby();
	return 0;
}

void EnterLobby()
{

	cout << "---------------------" << endl;
	cout << "로비에 입장했습니다!" << endl;
	cout << "---------------------" << endl;


	// 구조체를 직접 반환
	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb;
	//[매개변수][RET][지역변수(temp(100,10,2), player(100,10,2)][매개변수(&temp)[RET][지역변수]
	player = CreatePlayer();



	// pointer로 세팅
	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb;
	//[매개변수][RET][지역변수(temp(40,8,1))][매개변수(&monster)[RET][지역변수()]
	CreateMonster(&monster);

	//구조체 복사
	/*player = monster;
	
	player.attack = monster.attack;
	player.defence = monster.defence;
	player.hp = monster.hp;*/


	bool victory = StartBattle(&player, &monster);
	if (victory)
		cout << "win!" << endl;
	else
		cout << "패배!" << endl;

}

StatInfo CreatePlayer()
{
	StatInfo ret;
	
	cout << "플레이어 생성" << endl;

	ret.hp = 100;	//ebp-16
	ret.attack = 10;// ebp-12
	ret.defence = 2;// ebp-8
	
	return ret;
}

void CreateMonster(StatInfo* info)
{

	cout << "몬스터 생성" << endl;

	info->hp = 100;
	info->attack = 10;
	info->defence = 2;
}

bool StartBattle(StatInfo* player, StatInfo* monster)
{
	while (true)
	{
		int damage = player->attack - monster->defence;
		if (damage < 0)
			damage = 0;

		monster->hp -= damage;
		if (monster->hp < 0)
			monster->hp = 0;

		cout << "몬스터 남은 체력 : " << monster->hp << endl;
		if (monster->hp == 0)
		{	
			cout << "몬스터를 처치했습니다!" << endl;
			return true;
		}


		damage = monster->attack - player->defence;
		if (damage < 0)
			damage = 0;

		player->hp -= damage;
		if (player->hp < 0)
		{
			player->hp = 0;
		}
		cout << "플레이어 남은 체력 : " << player->hp << endl;
		if (player->hp == 0)
		{
			cout << "당신은 사망했습니다... GAME OVER" << endl;
			return false;
		}
	}
}