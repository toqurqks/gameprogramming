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
// �÷��̾� �¸��� true, �ƴϸ� false
bool StartBattle(StatInfo* player, StatInfo* monster);

int main()
{
	// ���� �õ� ����
	srand(time(0));

	EnterLobby();
	return 0;
}

void EnterLobby()
{

	cout << "---------------------" << endl;
	cout << "�κ� �����߽��ϴ�!" << endl;
	cout << "---------------------" << endl;


	// ����ü�� ���� ��ȯ
	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb;
	//[�Ű�����][RET][��������(temp(100,10,2), player(100,10,2)][�Ű�����(&temp)[RET][��������]
	player = CreatePlayer();



	// pointer�� ����
	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb;
	//[�Ű�����][RET][��������(temp(40,8,1))][�Ű�����(&monster)[RET][��������()]
	CreateMonster(&monster);

	//����ü ����
	/*player = monster;
	
	player.attack = monster.attack;
	player.defence = monster.defence;
	player.hp = monster.hp;*/


	bool victory = StartBattle(&player, &monster);
	if (victory)
		cout << "win!" << endl;
	else
		cout << "�й�!" << endl;

}

StatInfo CreatePlayer()
{
	StatInfo ret;
	
	cout << "�÷��̾� ����" << endl;

	ret.hp = 100;	//ebp-16
	ret.attack = 10;// ebp-12
	ret.defence = 2;// ebp-8
	
	return ret;
}

void CreateMonster(StatInfo* info)
{

	cout << "���� ����" << endl;

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

		cout << "���� ���� ü�� : " << monster->hp << endl;
		if (monster->hp == 0)
		{	
			cout << "���͸� óġ�߽��ϴ�!" << endl;
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
		cout << "�÷��̾� ���� ü�� : " << player->hp << endl;
		if (player->hp == 0)
		{
			cout << "����� ����߽��ϴ�... GAME OVER" << endl;
			return false;
		}
	}
}