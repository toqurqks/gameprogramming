#include <iostream>
using namespace std;

//�Ҹ���� �Ǽ�
bool isHighLevel = true;
bool isPlayer = false;

// [Note]
// bool = 1 byte ����
// �������� ����

//float ��ȣ(1) ����(8) ��ȿ����(23) = 32��Ʈ = 4����Ʈ
//double ��ȣ(1) ����(8) ��ȿ����(52) = 64��Ʈ = 8����Ʈ
float attackSpeed = 0.649f; // 4����Ʈ
double attackSpeed2 = 123.4123; // 8����Ʈ
float attackSpeed3 = -3.375f; // 4����Ʈ

// ex) -3.375��� ���� ����
// 1) 2���� ��ȯ = (3) + (0.375) = 0b11
// 0.375 = 0.5 * 0 + 0.25 * 1 + 0.125 * 1 = 0b0.011
// 2) ����ȭ 0b1.1011 * 2^1
// 1(��ȣ) 1(����) 1011(��ȿ����)
// ������ unsigned byte��� �����ϰ� ���� + 127 ������ش�.
// ���� ��� : 0b 1 10000000 1011000'0000'0000'0000'0000
// Ȯ�� ��� : 00 00 58 c0 �������� c0 58 00 00 little endian
int main()
{
	cout << isHighLevel << endl;
	return 0;
}