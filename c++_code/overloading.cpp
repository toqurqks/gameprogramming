#include <iostream>
using namespace std;

// 오버로딩 (함수 이름의 재사용)
// 매개변수 갯수가 다르거나
// 매개변수 타입이 다르거나 (순서가 다른 것도 포함)

// 기능 : 오버로딩 연습을 위한 덧셈함수
int Add(int a, int b); // intput : int , int / output : int
float Add(float a, float b); // intput : float , float / output : float
void SetPlayerInfo(int hp, int mp, int attack, int guildId, int castId);
int Factorial(int n);


int main()
{
	int result = Factorial(10000000);
	cout << result << endl;

	return 0;
}

int Add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

float Add(float realnum1, float realnum2)
{
	float result = realnum1 + realnum2;
	return result;
}

// 기본 인자값
// 입력값이 없는 경우에 대하여 디폴트 값을 설정할 수 있다.
void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int castId = 0)
{

}

// 스택 오버플로우
// 할당된 스택의 크기가 정해져있기 떄문에 스택의 크기를 넘어서는 만큼의 호출을 하게되면
// 스택 오버플로우가 발생하게 된다.

// 대응 방법으로는 스택 오버플로우를 발생시킬것 같은 호출에 예외처리를 하거나, 
// 재귀함수를 호출하지 않는 방법등이 있다.
int Factorial(int n)
{
	if(n<=1)
		return 1;
	return n * Factorial(n - 1);
}