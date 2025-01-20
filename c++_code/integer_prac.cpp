#include <iostream>
using namespace std;

// 주석 다는 방법
// Ctrl + K + C (선택한 블럭 전체 주석처리)or Ctrl +  K + U(선택 블록주석 처리 해제)
// shift를 누른채로 방향키로 이동하면 줄단위 선택 가능

/*
* 주석이 여러줄인 경우
* 
*/

// 0이 아닌 초기화 값이 있으면 .data 영역
int hp = 100;
// 초기값이 0 이거나, 초기값이 없는 변수라면 .bss 영역

//signed는 생략
char a; // 1바이트 (-128~ 127)
short b; // 2바이트 (-32768, 32767)
int c; // 4바이트 (약 -21.4억 ~ 21.4억) 
__int64 d; // 8바이트(long long)


//unsigned는 양수만 표현
unsigned char ua; // 1바이트 (0 ~ 255)
unsigned short ub; // 2바이트 (0 ~ 65535)
unsigned int uc; // 4바이트 (0 ~ 약 42.9억) 
unsigned __int64 ud; // 8바이트(long long, 0 ~ 표현하기에 큰 수)

int main()
{
    //오버플로우
    b = 32767;
    b = b + 1;
    cout << b << endl;

    //언더플로우
    ub = 0;
    ub = ub - 1;
    cout << ub << endl;

    
}
