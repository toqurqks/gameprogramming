#include <iostream>
using namespace std;

// 지역변수와 전역변수

// 전역변수 ./rodata(읽기전용 data ex)상수 ...) 
// ./bss(초기화 안함), ./data(초기값 지정) 영역에 저장되는 변수

int globalValue = 10;

void Test()
{
	cout << "전역 변수의 값은 : " << endl;
	globalValue++;


}

void IncreaseHP(int hp)
{
	hp = hp + 1;
}



void main()
{
	int hp = 1;

	// 메모리 및 어셈블리 확인 결과
	// 호출할 때 매개변수로 가져간 hp에 변화 없음
	// 값으로 전달만 되고 원본 데이터는 변화하지 않는다는 뜻
	cout << "Increase 호출 전 : " << hp << endl;
	IncreaseHP(hp);
	cout << "Increase 호출 후 : "<< hp << endl;


	int localValue = 1;

	return;
}
