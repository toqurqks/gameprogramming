#include <iostream>
using namespace std;

// ����

struct StatInfo
{
	int hp; // +0
	int attack; // +4
	int defence; // +8
};

// stack frame
// main : [�Ű�����][ret][��������(info)]
// call create monster : [�Ű�����(&info)][RET][��������]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// stack frame
// main : [�Ű�����][ret][��������(info)]
// call create monster : [�Ű�����(����� info)][RET][��������]
// ���Ͻ� Ȱ���� �����ʹ� ������� �ʴ� ������ �����ϰ� �Ǿ� ������ �����͸� �����ϴ� �뵵�δ� ����� �� ���Ե�
// ���� ������ üũ�Ͽ� ����ϰ� ������ ���� �������� �ʱ� ���Ѵٸ� �̷��� ����� ������ �� �ִ�.
void CreateMonster(StatInfo info)
{
	//�����͸� �̿��� ������ �ƴҰ�� ���� �����ϴ� ����� �ȴ�.


}
// StatInfo ����ü�� ũ�Ⱑ ū ���� ����ü���
// �� ���� -> ��� �� ���� -> ���ҽ� ���� ����
// �ּ� ���� StatInfo*�� 8����Ʈ
// ���� ���� StatInfo&�� 8����Ʈ
void PrintInfoByCopy(StatInfo info)
{
	cout << info.hp << endl;
}


void PrintInfoByPtr(StatInfo* info)
{
	cout << info->hp << endl;
}



// �� ���� ó�� ���ϰ� ����ϰ�
// �ּ� ����ó�� �ּҰ��� �̿��� ���� �����͸� ��ȭ�ϴ� ���
void PrintInfoByRef(StatInfo& info)
{
	cout << info.hp << endl;
}

int main()
{
	// �ٱ��� �̸��� number
	// number��� �̸����� �� �����ų� �ִ´ٰ� �ϸ�
	// �޸��� �ش� �ּ�(data, stack, heap)���� ��û�� �۾��� �����ϸ� ��
	int number = 1;

	// * = �ּҸ� ��� �ٱ���
	// int �ٱ��ϸ� ���󰡸� int data�� �������� ��� ���
	int* pointer = &number;
	// pointer �ٱ��Ͽ� �ִ� �ּҸ� Ÿ�� �̵��ؼ�, �� �ٱ��Ͽ� ���� �־��
	*pointer = 2;

	// �ο췹�� �������� ���� �۵� ����� int*�� �Ȱ���
	// ������ �����ؼ� ������� üũ�غ��� �����Ϳ� ������ �۾� ����
	int& reference = number;

	// number�̶�� �ٱ��Ͽ� reference��� �ٸ� �̸��� �߰�
	// ������ reference �ٱ��Ͽ� �� �����ų� ������,
	// ���� number �ٱ��Ͽ� ����ִ� �� ���� �����ų� ������ ��
	reference = 3;

	

	StatInfo info;
	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	return 0;
}