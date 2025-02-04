#include <iostream>
using namespace std;

// 호출 스택
// 호출 스택이란 함수를 호출하면서 쌓아 올라가는 스택형태의 구조
// 스택 프레임에서 지역변수를 쌓았던 것처럼 
// 함수 내부에서 함수를 호출하는 경우 함수 호출 또한 스택형태로 쌓는 구조를 만들어낸다
// main에서 함수를 호출하는 것 또한 하나의 예시가 될 수 있다.

// 함수 선언
// 기능 : 호출스택 테스트를 위한 임시함수들
void Func1();// input : 없음 / output : 없음
void Func2(int hp, int mp);// input : int, int / output : 없음
void Func3(float realnum);// input : float / output : 없음


int main()
{
	cout << "main" << endl;
	Func1();

	return 0;
}

void Func1()
{
	cout << "Func1" << endl;

	Func2(1, 2);
	Func3(10.0f);
}

void Func2(int num1, int num2)
{
	cout << "Func2" << endl;

	Func3(10);
}

void Func3(float num1)
{
	cout << "Func3" << endl;
}

