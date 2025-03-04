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


void PrintInfoByPtr(StatInfo* info)
{
	cout << info->hp << endl;
}



// 값 전달 처럼 편리하게 사용하고
// 주소 전달처럼 주소값을 이용해 원본 데이터를 변화하는 방식
void PrintInfoByRef(StatInfo& info)
{
	cout << info.hp << endl;
}

int main()
{
	// 바구니 이름이 number
	// number라는 이름에서 뭘 꺼내거나 넣는다고 하면
	// 메모리의 해당 주소(data, stack, heap)에서 요청한 작업을 수행하면 돼
	int number = 1;

	// * = 주소를 담는 바구니
	// int 바구니를 따라가면 int data가 있을꺼야 라는 약속
	int* pointer = &number;
	// pointer 바구니에 있는 주소를 타고 이동해서, 그 바구니에 값을 넣어라
	*pointer = 2;

	// 로우레벨 관점에서 실제 작동 방식은 int*과 똑같음
	// 실제로 실행해서 어셈블리를 체크해보니 포인터와 동일한 작업 수행
	int& reference = number;

	// number이라는 바구니에 reference라는 다른 이름을 추가
	// 앞으로 reference 바구니에 뭘 꺼내거나 넣으면,
	// 실제 number 바구니에 들어있는 그 값을 꺼내거나 넣으면 됨
	reference = 3;

	

	StatInfo info;
	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	return 0;
}