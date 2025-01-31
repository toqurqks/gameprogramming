#include <iostream>
using namespace std;

// 반복문
// 지금까지는 데이터를 메모리에 할당하고 가공하는 방법에 대해 공부함
// 가공한 데이터를 이용해서 무엇인가를 하고싶을 때 사용함
 
int main()
{
	// while ~동안에
	// if-else 유용함
	// 한번만 실행하는게 아니라, 특정 조건까지 계속 반복해야하는 상황
	// ex) 게임을 끌때까지 계속 게임을 실행하라
	// ex) 목적지에 도달할 때까지 계속 이동하라

	/*
	while (조건식)
	{
		명령문
	}
	*/

	int count = 0;

	// !Warning! 조건의 변화가 없기 때문에 무한루프
	/*
	while (count < 5)
	{
		cout << "Hello World" << endl;

	}
	*/

	/*while (count < 5)
	{
		cout << "Hello World" << endl;
		count++;
	}*/

	// do while문
	// 일단 한번 실행후 조건을 체크하기 때문에 조건이 false여도 한번은 실행한다
	// 잘 사용하지 않음
	//do 
	//{
	//	cout << "Hello World" << endl;
	//	count++;
	//}while(false) // test case : 만약 조건이 false라면


	//// for 문
	//for (int count = 0; count < 5; count++)
	//{
	//	cout << "Hello World" << endl;
	//}


	// 루프문의 흐름 제어 break countinue
	/*int round = 1;
	int hp = 100;
	int damage = 10;


	while (true)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0;

		cout << "Round" <<  round << endl << "몬스터 체력" << hp << endl;

		if (hp == 0)
		{
			break;
		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}

		round++;
	}*/

	// 1~10 사이의 홀수만 출력하기
	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);
		
		if (isEven)
			continue;

		cout << count << endl;
	}
	
}
