#include <iostream>
using namespace std;

// �����ε� (�Լ� �̸��� ����)
// �Ű����� ������ �ٸ��ų�
// �Ű����� Ÿ���� �ٸ��ų� (������ �ٸ� �͵� ����)

// ��� : �����ε� ������ ���� �����Լ�
int Add(int a, int b); // intput : int , int / output : int
float Add(float a, float b); // intput : float , float / output : float
void SetPlayerInfo(int hp, int mp, int attack, int guildId, int castId);
int Factorial(int n);


int main()
{
	int result = Factorial(10000000);
	cout << result << endl;

	return 0;
}

int Add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

float Add(float realnum1, float realnum2)
{
	float result = realnum1 + realnum2;
	return result;
}

// �⺻ ���ڰ�
// �Է°��� ���� ��쿡 ���Ͽ� ����Ʈ ���� ������ �� �ִ�.
void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int castId = 0)
{

}

// ���� �����÷ο�
// �Ҵ�� ������ ũ�Ⱑ �������ֱ� ������ ������ ũ�⸦ �Ѿ�� ��ŭ�� ȣ���� �ϰԵǸ�
// ���� �����÷ο찡 �߻��ϰ� �ȴ�.

// ���� ������δ� ���� �����÷ο츦 �߻���ų�� ���� ȣ�⿡ ����ó���� �ϰų�, 
// ����Լ��� ȣ������ �ʴ� ������� �ִ�.
int Factorial(int n)
{
	if(n<=1)
		return 1;
	return n * Factorial(n - 1);
}