#include <iostream>

int a = 1;
int b = 2;


bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;
bool test;

int hp = 100;
bool isInvincible = true;


//	//ctrl + alt + d = 어셈블리 코드 출력
int main()
{
#pragma region 산술연산
//	// 산술연산자
//
//	// a에 b를 대입하고 b를 반환하라
//	// -> b라는 바구니 안에 있는 값을, a라는 바구니 안에다 복사한다.
//	
//	// 대입연산
//	a = b;
//
//	// 사칙연산
//	// 언제 필요한가?
//	// ex) 데미지 계산, 체력 깎기, 루프문에서 카운터를 1 증가시키기
//
//	a = a + 3; // 덧셈 add
//	a = b - 3; // 뺄셈 sub
//	a = b * 3; // 곱셈 mul
//	a = b / 3; // 나눗셈 div
//	a = b % 3; // 나머지 div
//
//	a += 3; // a = a + 3
//	a -= 3;
//	a *= 3;
//	a /= 3;
//	a %= 3;
//
//	// 증감 연산자
//	a = a + 1; // add eax, 1 -> inc eax
//	//전위 연산자, 후위연산자
//	
//	//연산을 먼저하고 실행할 것인가, 실행 후에 연산을 진행할 것인가
//	a++;
//	++a;
//	a--;
//	--a;
//

#pragma endregion

#pragma region 비교 연산
	// 언제 필요한가?
	// ex) 특정 조건과 비교할때
	// ex) 체력이 0이 되었을 때, 경험치가 100%일때, 체력이 30% 이하일 떄
	
	// a == b;
	// 같으면 1, 다르면 0
	isSame = (a == b);

	// a != b;
	// 다르면 1, 같으면 0
	isDifferent = (a != b);

	// a > b : a가 b보다 크다
	// a >= b : a가 b보다 크거나 같다?
	// 크면 1 아니면 0
	isGreater = (a > b);

	// a < b : a가 b보다 작다
	// a <= b : a가 b보다 작거나 같다
	// 작으면 1 아니면 0
	isSmaller = (a < b);

#pragma endregion

#pragma region 논리연산
	// 언제 필요한가?
	// ex) 길드 마스터이거나 운영자 계정이면? 과 같은 논리적 연산이 필요한 경우

	// ! not 
	// 0 이면 1, 그 외 0
	test = !isSame; // isDifferent와 같은 의미

	// && and
	// a && b -> 둘다 1이면 1
	test = (hp <= 0 && isInvincible == false); // 죽음

	// || or
	// a || b -> 둘 중 하나라도 1이면 1 (둘다 0 이면 0)
	test = (hp > 0 || isInvincible == true);


#pragma endregion
}
