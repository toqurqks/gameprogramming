#include <iostream>
using namespace std;

// ȣ�� ����
// ȣ�� �����̶� �Լ��� ȣ���ϸ鼭 �׾� �ö󰡴� ���������� ����
// ���� �����ӿ��� ���������� �׾Ҵ� ��ó�� 
// �Լ� ���ο��� �Լ��� ȣ���ϴ� ��� �Լ� ȣ�� ���� �������·� �״� ������ ������
// main���� �Լ��� ȣ���ϴ� �� ���� �ϳ��� ���ð� �� �� �ִ�.

// �Լ� ����
// ��� : ȣ�⽺�� �׽�Ʈ�� ���� �ӽ��Լ���
void Func1();// input : ���� / output : ����
void Func2(int hp, int mp);// input : int, int / output : ����
void Func3(float realnum);// input : float / output : ����


int main()
{
	cout << "main" << endl;
	Func1();

	return 0;
}

void Func1()
{
	cout << "Func1" << endl;

	Func2(1, 2);
	Func3(10.0f);
}

void Func2(int num1, int num2)
{
	cout << "Func2" << endl;

	Func3(10);
}

void Func3(float num1)
{
	cout << "Func3" << endl;
}

