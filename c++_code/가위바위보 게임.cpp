#include <iostream>
using namespace std;

int main()
{
#pragma region star
	//int input;
	//cin >> input;



	//// �����
	//// ������ �Է��ϸ�
	//// N*N���� ���� ���

	///*for (int j = 0; j <= input; j++)
	//{
	//	for (int k = 0; k <= input; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}*/

	//// �����2
	//// 1������ �����ؼ� ���������� �ٸ��� �����ϰ� �����ϱ�
	//
	///*for (int j = 1; j <= input; j++)
	//{
	//	for (int k = 1; k <= j; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}*/
	//
	//// �����3
	//// N������ �����ؼ� �ٸ��� 1���� �پ��� ���·� ������ּ���

	///*for (int j = input; j > 0; j--)
	//{
	//	for (int k = 0; k < j; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}*/

	//// ������ 2~9�� ���
	//for (int j = 2; j < 10; j++)
	//{
	//	for (int k = 1; k < 10; k++)
	//	{
	//		cout << j << "*" << k << "=" << j * k << endl;
	//	}
	//}

#pragma endregion

#pragma region rock
	// ���� ���� �� ���� �����
	srand(time(0)); // �õ� ����

	// 0, 1, 2
	// ������ ���� �����ϴ� �Լ��̸� ������ 3���� �����ϱ� ���� 
	// 3���� ���� �������� ������ ����
	// ���� ������ ���ϴ� �� 1~3�̱� ������ 1�� ���Ͽ� ���
	rand(); //0~32767

	const int SCISSOR = 1;
	const int ROCK = 2;
	const int PAPER = 3;
	
	int randval;
	int userval;
	int win = 0;
	int num_game = 0;
	// ������ ���Ѵ�� �����
	// ���� ���� ���� �Է¹޾Ƽ� ��ǻ���� ���� ���Ͽ�, ���и� ����ϱ�
	cout << "����, ����, �� �����Դϴ�." << endl;
	while (true)
	{
		num_game++;
		cout << "����(1), ����(2), ��(3)�� �Է����ּ���." << endl;
		cout << "4�� �Է��ϸ� ����˴ϴ�." << endl;
		cin >> userval;

		randval = 1 + (rand() % 3);
		// ������ ������ ���Ҵ� �κ�
		// �� ������ �޶����� ���� �ڵ尡 ���������ų� �ܼ��� �� �κ����ִ°�?
		// ������ �������� �ϴ� ��� ������ ������ �������� ���� �б⸦ Ÿ��
		// �б⸦ ź �Ŀ� �� ���� ���Ͽ� �ش��ϴ� ���̽��� �´� �ڵ带 �����ϴ� ���

		// ��ǻ�Ͱ� ���� ���� �������� �Ѵٸ�
		// �ᱹ ��ǻ�Ͱ� ���� �� 1, 2, 3
		// ������ ���� �� 1, 2, 3
		// ������ ����� �޶� �� 9������ ����� ���� �ݵ�� �ʿ��ϱ� ������
		// �ڵ带 �����ϰ� ���� ����� ����
#pragma region user����
		if (userval == 1)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "��ǻ�ʹ� ������ ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			case ROCK:
				cout << "��ǻ�ʹ� ������ ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			case PAPER:
				cout << "��ǻ�ʹ� ���� ���� �̰���ϴ�." << endl;
				cout << "���� �·� : " << (win*100) / num_game << endl;
				win++;
				break;
			}
		}
		else if (userval == 2)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "��ǻ�ʹ� ������ ���� �̰���ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				win++;
				break;
			case ROCK:
				cout << "��ǻ�ʹ� ������ ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			case PAPER:
				cout << "��ǻ�ʹ� ���� ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			}
		}
		else if(userval == 3)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "��ǻ�ʹ� ������ ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			case ROCK:
				cout << "��ǻ�ʹ� ������ ���� �̰���ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				win++;
				break;
			case PAPER:
				cout << "��ǻ�ʹ� ���� ���� �����ϴ�." << endl;
				cout << "���� �·� : " << (win * 100) / num_game << endl;
				break;
			}

		}
		else if(userval ==4)
		{
			cout << "�����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "�߸� �Է��߽��ϴ�." << endl;
			num_game--;
		}
	}
#pragma endregion 


#pragma endregion
}