#include <iostream>
using namespace std;

// ������ ������
// 1. �ּ� ������
// 2. ��� ������
// 3. ���� ������
// 4. ���� ��� ������
struct Player
{
	int hp;
	int damage;
};

int main()
{
	int number = 1;

	// 1. �ּ� ������ (&)
	// �ش� ������ �ּ�
	// �ش� ���� Ÿ�Կ� ���� *type���� ��ȯ����
	int* pointer = &number;

	// 2. ��� ������
	// �����Ϳ��� + �� -�� ����������� 1�� ���ϰų� ����,
	// Ÿ��ũ�⸸ŭ �̵��Ͽ� ���� Ȥ�� ���� �޸𸮸� ����Ű�� �����Ͱ� ��
	pointer = pointer + 1;
	pointer++;
	++pointer;
	pointer += 1;
	
	// 3. ���� ������ (*)
	number = 3;
	*pointer = 3;

	Player player;
	player.hp = 100;
	player.damage = 10;

	Player* playerPtr = &player;

	(*playerPtr).hp = 200;
	(*playerPtr).damage = 200;

	// 4. ���� ��� ������ (->)
	// * ����������
	// . ����ü�� Ư�� ����� �ٷ� �� 
	playerPtr->damage = 200;
	playerPtr->hp = 200;
	return 0;
}