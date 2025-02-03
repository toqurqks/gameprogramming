#include <iostream>
using namespace std;


// 함수 (프로시저, 메소드, 루틴)

/*
* input으로 무엇을 받고, output으로 무엇을 결과로 줄 것인가
*/


// 기능 : Hello World를 출력하는 함수
// 함수 이름 : PrintHelloWorld
// input : 없음 / output : 없음

void PrintHelloWorld()
{
	cout << "Hello World" << endl;
}

// 기능 : 정수를 입력받아서, 콘솔에 출력하는 함수
// 함수 이름 : PrintNumber
// input : int / output : 없음

void PrintNumber(int Number)
{
	cout << "입력하신 숫자는 " << Number << " 입니다" << endl;
}

// 기능 : 2를 곱한 결과를 반환하는 함수
// 함수 이름 MultiplyBy2
// intput : int / output : int
int MultiplyBy2(int MulNum)
{
	return MulNum * 2;
}

// 기능 : 두 숫자를 곱해서 결과를 반환하는 함수
// 함수 이름 MultiplyBy
// intput = int형 2개 / output : int
int MultiplyBy(int MulNum1, int MulNum2)
{
	//int result = MulNum1 * MulNum2;
	//return result;
	
	return MulNum1 * MulNum2;
}
int main()
{

	int a = 3;
	int b = 5;
	int result = MultiplyBy(a, b);
	PrintNumber(result);
	//PrintHelloWorld();
	
	return 0;
}


