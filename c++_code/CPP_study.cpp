#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;



	// �����
	// ������ �Է��ϸ�
	// N*N���� ���� ���

	/*for (int j = 0; j <= input; j++)
	{
		for (int k = 0; k <= input; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// �����2
	// 1������ �����ؼ� ���������� �ٸ��� �����ϰ� �����ϱ�
	
	/*for (int j = 1; j <= input; j++)
	{
		for (int k = 1; k <= j; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	// �����3
	// N������ �����ؼ� �ٸ��� 1���� �پ��� ���·� ������ּ���

	/*for (int j = input; j > 0; j--)
	{
		for (int k = 0; k < j; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// ������ 2~9�� ���
	for (int j = 2; j < 10; j++)
	{
		for (int k = 1; k < 10; k++)
		{
			cout << j << "*" << k << "=" << j * k << endl;
		}
	}

	
}