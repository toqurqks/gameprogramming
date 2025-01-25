#include <iostream>


// 한번 정해지면 절대 바뀌지 않을 값들
// constant의 약자인 const를 붙임
// const를 붙였으면 초기값을 반드시 지정해야 함

unsigned char flag;
const int INVICIBLE = 1;
const int stun = 2;
const int POLYMORPH = 3;
const int FEAR = 4;


// .data (초기값 있는 경우)
// 전역변수
int a = 2;

// .bss (초기값 없는 경우
int b;

// .rodata (읽기 전용 데이터)
const char* msg = "Hello World";


//ctrl + alt + d = 어셈블리 코드 출력
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

#pragma region 비트연산
	// 언제 필요한가?
	// 비트 단위 조작이 필요할 때
	// ex) bitflag

	// ~ bitwise not 
	// 단일 숫자의 모든 비트를 뒤집기
	

	// & bitwise and
	// 두 숫자의 모든 비트 쌍을 대상으로 and연산

	// | bitwise or
	// 두 숫자의 모든 비트 쌍을 대상으로 or 연산

	// ^ bitwise xor
	// 두 숫자의 모든 비트 쌍을 대상으로 xor 연산

	// << 비트 좌측 이동
	// 비트열을 N만큼 왼쪽으로 이동
	// 왼쪽의 넘치는 N개의 비트는 버림 새로 생성되는 비트는 0으로 채워짐

	// >> 빕트 우측 이동
	// 비트열을 N만큼 우측으로 이동
	// 우측의 N개의 비트는 버림
	// 왼쪽의 생성되는 N개의 비트는
	// - 부호비트가 존재할 경우 부호비트를 따라감
	// - 아니면 0


	// 실습
	// 상태이상 종류: 무적, 변이, 스턴, 에어본
	const int INVICIBLE = 3;
	
	// 무적 상태로 만든다
	flag = (1 << 3);

	// 변이 상태를 추가한다
	flag |= (1 << 2);

	// 무적인지 확인하고 싶다? (다른 상태는 관심없음)
	// bitmask
	bool invincible = ((flag& (1 << 3)) != 0);

	// 무적이거나 스턴 상태인지 확인하고 싶다?
	bool stunOrInvincible = ((flag & 0b1010) != 0);

#pragma endregion
}
