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


void PrintInfoByPtr(const StatInfo* const info)
{
	cout << info->hp << endl;

	
	// *�� ��ġ�� ���� ����� �޶���

	// const�� * �ڿ� ���̴� ���
	// info��� �ٱ����� ���빰�� �ٲ� �� ����
	// info�� �ּҰ��� ���� �ٱ��� -> �ּҰ��� ����
	// �ּҰ��� �ٲ� �� ����

	// const * �տ� ���̴� ���
	// info�� ����Ű�� ���빰�� �ٲ� �� ����

	// �� �� ���� ���
	

	// info[ �ּҰ� ] ->  �ּҰ� [ ������ ]
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
	// ������ vs ����
	// ���� : ����� �������� �Ȱ��� ������ �Ȱ���
	// ���Ǽ� : ������ ������? ( ȭ��ǥ�� ���� �������̰� �ִ��� �� �𸣰���)
	// ���̰� ª�Ƽ� �������� �ö󰡳�?

	// 1. ���Ǽ��� ���ٴ°� ������ ������ �ƴ�
	// �����ʹ� �ּҸ� �ѱ�� Ȯ���ϰ� ������ �ѱ��
	// ������ �𸣰� ����ĥ �� �ִ� ���輺 ����
	
	// ex) �𸣰� �׳� ������ �ع����� ����
	// const�� ����ؼ� ������� ��ġ�� �κ��� �����ϴ°� ����

	// �����͵� const�� ��밡��
	// PrintInfoByPtr���� Ȯ��

	// 2) �ʱ�ȭ ����
	// ���� Ÿ���� �ٱ����� 2��° �̸�
	// -> �����ϴ� ����� ������ �ȵ�
	// �����ʹ� � �ּҸ� �ǹ�
	// ����Ű���ִ� ��ġ�� �ƹ��͵� ���� ���� ����
	// NULL, nullptr;
	// �������� nullptr�� ������ ���⋚���� �Լ��� ������ ���� ������ ������ ��찡 
	// ������ �� �� ����

	// ������ ���µ�
	// ���ۿ����� ������ ���
	// �𸮾󿡼� ���۷����� ���
	// �ƹ��ų� �����ص� �Ǵµ� ������ ��ȣ�� ���� �� �˰� ����ϸ� �� ��
	
	// ���� �����Ͱ� �� �����Ű�����...
	// �ٸ� ����� ���� �ڵ带 �� ��쿡�� ��������� ������ ���� ����.
	
	StatInfo info;

	StatInfo* pointer;
	pointer = &info;
	PrintInfoByPtr(pointer);

	//StatInfo& reference; -> ������ ��������̾��
	StatInfo& reference = info;
	PrintInfoByRef(reference);

	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	return 0;
}