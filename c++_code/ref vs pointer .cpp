#include <iostream>
using namespace std;

// 참조

struct StatInfo
{
	int hp; // +0
	int attack; // +4
	int defence; // +8
};

// stack frame
// main : [매개변수][ret][지역변수(info)]
// call create monster : [매개변수(&info)][RET][지역변수]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// stack frame
// main : [매개변수][ret][지역변수(info)]
// call create monster : [매개변수(복사된 info)][RET][지역변수]
// 리턴시 활용한 데이터는 사용하지 않는 영역에 존재하게 되어 원본의 데이터를 수정하는 용도로는 사용할 수 없게됨
// 만약 값만을 체크하여 사용하고 원본의 값을 수정하지 않길 원한다면 이러한 방식이 유용할 수 있다.
void CreateMonster(StatInfo info)
{
	//포인터를 이용한 접근이 아닐경우 값을 복사하는 방식이 된다.


}
// StatInfo 구조체가 크기가 큰 대형 구조체라면
// 값 전달 -> 모든 값 복사 -> 리소스 많이 먹음
// 주소 전달 StatInfo*는 8바이트
// 참조 전달 StatInfo&도 8바이트
void PrintInfoByCopy(StatInfo info)
{
	cout << info.hp << endl;
}


void PrintInfoByPtr(const StatInfo* const info)
{
	cout << info->hp << endl;

	
	// *의 위치에 따라 기능이 달라짐

	// const를 * 뒤에 붙이는 경우
	// info라는 바구니의 내용물을 바꿀 수 없음
	// info는 주소값을 갖는 바구니 -> 주소값이 고정
	// 주소값을 바꿀 수 없음

	// const * 앞에 붙이는 경우
	// info가 가리키는 내용물을 바꿀 수 없음

	// 둘 다 막는 방법
	

	// info[ 주소값 ] ->  주소값 [ 데이터 ]
	info = &Globalinfo;
	info->hp = 10000;
}




void PrintInfoByRef(StatInfo& info)
{
	cout << info.hp << endl;
}
StatInfo Globalinfo;

int main()
{
	// 포인터 vs 참조
	// 성능 : 어셈블리 레벨에서 똑같기 떄문에 똑같음
	// 편의성 : 참조가 직관적? ( 화살표와 점이 무슨차이가 있는지 잘 모르겟음)
	// 길이가 짧아서 가독성이 올라가나?

	// 1. 편의성이 좋다는게 무조건 장점은 아님
	// 포인터는 주소를 넘기니 확실하게 원본을 넘긴다
	// 참조는 모르고 지나칠 수 있는 위험성 존재
	
	// ex) 모르고 그냥 수정을 해버리는 위험
	// const를 사용해서 마음대로 고치는 부분을 개선하는게 가능

	// 포인터도 const를 사용가능
	// PrintInfoByPtr에서 확인

	// 2) 초기화 여부
	// 참조 타입은 바구니의 2번째 이름
	// -> 참조하는 대상이 없으면 안됨
	// 포인터는 어떤 주소를 의미
	// 가리키고있는 위치에 아무것도 없을 수도 있음
	// NULL, nullptr;
	// 참조에는 nullptr의 개념이 없기떄문에 함수의 구현에 없는 값으로 들어오는 경우가 
	// 문제가 될 수 있음

	// 정답은 없는데
	// 구글에서는 포인터 사용
	// 언리얼에선 레퍼런스도 사용
	// 아무거나 선택해도 되는데 개인적 선호에 따라 잘 알고 사용하면 될 것
	
	// 나는 포인터가 더 좋은거같긴함...
	// 다른 사람이 만든 코드를 볼 경우에는 기존방식을 따르는 것이 좋다.
	
	StatInfo info;

	StatInfo* pointer;
	pointer = &info;
	PrintInfoByPtr(pointer);

	//StatInfo& reference; -> 에러남 참조대상이없어서
	StatInfo& reference = info;
	PrintInfoByRef(reference);

	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	return 0;
}