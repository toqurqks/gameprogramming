#include <iostream>
using namespace std;

int main()
{
#pragma region star
	//int input;
	//cin >> input;



	//// 별찍기
	//// 정수를 입력하면
	//// N*N개의 별을 찍기

	///*for (int j = 0; j <= input; j++)
	//{
	//	for (int k = 0; k <= input; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}*/

	//// 별찍기2
	//// 1개부터 시작해서 순차적으로 줄마다 증가하게 수정하기
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
	//// 별찍기3
	//// N개부터 시작해서 줄마다 1개씩 줄어드는 형태로 만들어주세요

	///*for (int j = input; j > 0; j--)
	//{
	//	for (int k = 0; k < j; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}*/

	//// 구구단 2~9단 출력
	//for (int j = 2; j < 10; j++)
	//{
	//	for (int k = 1; k < 10; k++)
	//	{
	//		cout << j << "*" << k << "=" << j * k << endl;
	//	}
	//}

#pragma endregion

#pragma region rock
	// 가위 바위 보 게임 만들기
	srand(time(0)); // 시드 설정

	// 0, 1, 2
	// 랜덤한 수를 추출하는 함수이며 범위를 3으로 설정하기 위해 
	// 3으로 나눈 나머지를 값으로 설정
	// 랜덤 값으로 원하는 건 1~3이기 떄문에 1을 더하여 사용
	rand(); //0~32767

	const int SCISSOR = 1;
	const int ROCK = 2;
	const int PAPER = 3;
	
	int randval;
	int userval;
	int win = 0;
	int num_game = 0;
	// 게임이 무한대로 실행됨
	// 가위 바위 보를 입력받아서 컴퓨터의 값과 비교하여, 승패를 출력하기
	cout << "가위, 바위, 보 게임입니다." << endl;
	while (true)
	{
		num_game++;
		cout << "가위(1), 바위(2), 보(3)를 입력해주세요." << endl;
		cout << "4를 입력하면 종료됩니다." << endl;
		cin >> userval;

		randval = 1 + (rand() % 3);
		// 구현중 생각해 보았던 부분
		// 흠 기준이 달라짐에 따라 코드가 간결해지거나 단순해 질 부분이있는가?
		// 유저를 기준으로 하는 경우 유저가 무엇을 내는지에 따라 분기를 타고
		// 분기를 탄 후에 각 값과 비교하여 해당하는 케이스에 맞는 코드를 실행하는 방식

		// 컴퓨터가 내는 값을 기준으로 한다면
		// 결국 컴퓨터가 내는 값 1, 2, 3
		// 유저가 내는 값 1, 2, 3
		// 값마다 결과가 달라 총 9가지의 경우의 수가 반드시 필요하기 때문에
		// 코드를 간결하게 만들 방법은 없음
#pragma region user기준
		if (userval == 1)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "컴퓨터는 가위를 내서 비겼습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			case ROCK:
				cout << "컴퓨터는 바위를 내서 졌습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			case PAPER:
				cout << "컴퓨터는 보를 내서 이겼습니다." << endl;
				cout << "현재 승률 : " << (win*100) / num_game << endl;
				win++;
				break;
			}
		}
		else if (userval == 2)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "컴퓨터는 가위를 내서 이겼습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				win++;
				break;
			case ROCK:
				cout << "컴퓨터는 바위를 내서 비겼습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			case PAPER:
				cout << "컴퓨터는 보를 내서 졌습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			}
		}
		else if(userval == 3)
		{
			switch (randval)
			{
			case SCISSOR:
				cout << "컴퓨터는 가위를 내서 졌습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			case ROCK:
				cout << "컴퓨터는 바위를 내서 이겼습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				win++;
				break;
			case PAPER:
				cout << "컴퓨터는 보를 내서 비겼습니다." << endl;
				cout << "현재 승률 : " << (win * 100) / num_game << endl;
				break;
			}

		}
		else if(userval ==4)
		{
			cout << "종료합니다." << endl;
			break;
		}
		else
		{
			cout << "잘못 입력했습니다." << endl;
			num_game--;
		}
	}
#pragma endregion 


#pragma endregion
}