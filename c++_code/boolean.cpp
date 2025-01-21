#include <iostream>
using namespace std;

//불리언과 실수
bool isHighLevel = true;
bool isPlayer = false;

// [Note]
// bool = 1 byte 정수
// 가독성이 좋음

//float 부호(1) 지수(8) 유효숫자(23) = 32비트 = 4바이트
//double 부호(1) 지수(8) 유효숫자(52) = 64비트 = 8바이트
float attackSpeed = 0.649f; // 4바이트
double attackSpeed2 = 123.4123; // 8바이트
float attackSpeed3 = -3.375f; // 4바이트

// ex) -3.375라는 값을 저장
// 1) 2진수 변환 = (3) + (0.375) = 0b11
// 0.375 = 0.5 * 0 + 0.25 * 1 + 0.125 * 1 = 0b0.011
// 2) 정규화 0b1.1011 * 2^1
// 1(부호) 1(지수) 1011(유효숫자)
// 지수는 unsigned byte라고 가정하고 숫자 + 127 만들어준다.
// 예상 결과 : 0b 1 10000000 1011000'0000'0000'0000'0000
// 확인 결과 : 00 00 58 c0 뒤집으면 c0 58 00 00 little endian
int main()
{
	cout << isHighLevel << endl;
	return 0;
}