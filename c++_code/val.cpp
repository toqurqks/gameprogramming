#include <iostream>
using namespace std;

// ���������� ��������

// �������� ./rodata(�б����� data ex)��� ...) 
// ./bss(�ʱ�ȭ ����), ./data(�ʱⰪ ����) ������ ����Ǵ� ����

int globalValue = 10;

void Test()
{
	cout << "���� ������ ���� : " << endl;
	globalValue++;


}

void IncreaseHP(int hp)
{
	hp = hp + 1;
}



void main()
{
	int hp = 1;

	// �޸� �� ����� Ȯ�� ���
	// ȣ���� �� �Ű������� ������ hp�� ��ȭ ����
	// ������ ���޸� �ǰ� ���� �����ʹ� ��ȭ���� �ʴ´ٴ� ��
	cout << "Increase ȣ�� �� : " << hp << endl;
	IncreaseHP(hp);
	cout << "Increase ȣ�� �� : "<< hp << endl;


	int localValue = 1;

	return;
}
