#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;



	// 별찍기
	// 정수를 입력하면
	// N*N개의 별을 찍기

	/*for (int j = 0; j <= input; j++)
	{
		for (int k = 0; k <= input; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 별찍기2
	// 1개부터 시작해서 순차적으로 줄마다 증가하게 수정하기
	
	/*for (int j = 1; j <= input; j++)
	{
		for (int k = 1; k <= j; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	// 별찍기3
	// N개부터 시작해서 줄마다 1개씩 줄어드는 형태로 만들어주세요

	/*for (int j = input; j > 0; j--)
	{
		for (int k = 0; k < j; k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 구구단 2~9단 출력
	for (int j = 2; j < 10; j++)
	{
		for (int k = 1; k < 10; k++)
		{
			cout << j << "*" << k << "=" << j * k << endl;
		}
	}

	
}