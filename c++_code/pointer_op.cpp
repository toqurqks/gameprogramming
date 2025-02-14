#include <iostream>
using namespace std;

// 포인터 연산자
// 1. 주소 연산자
// 2. 산술 연산자
// 3. 간접 연산자
// 4. 간접 멤법 연산자
struct Player
{
	int hp;
	int damage;
};

int main()
{
	int number = 1;

	// 1. 주소 연산자 (&)
	// 해당 변수의 주소
	// 해당 변수 타입에 따라서 *type까지 반환해줌
	int* pointer = &number;

	// 2. 산술 연산자
	// 포인터에서 + 나 -등 산술연산으로 1을 더하거나 빼면,
	// 타입크기만큼 이동하여 다음 혹은 이전 메모리를 가리키는 포인터가 됨
	pointer = pointer + 1;
	pointer++;
	++pointer;
	pointer += 1;
	
	// 3. 간접 연산자 (*)
	number = 3;
	*pointer = 3;

	Player player;
	player.hp = 100;
	player.damage = 10;

	Player* playerPtr = &player;

	(*playerPtr).hp = 200;
	(*playerPtr).damage = 200;

	// 4. 간접 멤버 연산자 (->)
	// * 간접연산자
	// . 구조체의 특정 멤버를 다룰 때 
	playerPtr->damage = 200;
	playerPtr->hp = 200;
	return 0;
}