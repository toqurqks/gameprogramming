#include <iostream>

int a = 1;
int b = 2;


bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;
bool test;

int hp = 100;
bool isInvincible = true;


//	//ctrl + alt + d = ����� �ڵ� ���
int main()
{
#pragma region �������
//	// ���������
//
//	// a�� b�� �����ϰ� b�� ��ȯ�϶�
//	// -> b��� �ٱ��� �ȿ� �ִ� ����, a��� �ٱ��� �ȿ��� �����Ѵ�.
//	
//	// ���Կ���
//	a = b;
//
//	// ��Ģ����
//	// ���� �ʿ��Ѱ�?
//	// ex) ������ ���, ü�� ���, ���������� ī���͸� 1 ������Ű��
//
//	a = a + 3; // ���� add
//	a = b - 3; // ���� sub
//	a = b * 3; // ���� mul
//	a = b / 3; // ������ div
//	a = b % 3; // ������ div
//
//	a += 3; // a = a + 3
//	a -= 3;
//	a *= 3;
//	a /= 3;
//	a %= 3;
//
//	// ���� ������
//	a = a + 1; // add eax, 1 -> inc eax
//	//���� ������, ����������
//	
//	//������ �����ϰ� ������ ���ΰ�, ���� �Ŀ� ������ ������ ���ΰ�
//	a++;
//	++a;
//	a--;
//	--a;
//

#pragma endregion

#pragma region �� ����
	// ���� �ʿ��Ѱ�?
	// ex) Ư�� ���ǰ� ���Ҷ�
	// ex) ü���� 0�� �Ǿ��� ��, ����ġ�� 100%�϶�, ü���� 30% ������ ��
	
	// a == b;
	// ������ 1, �ٸ��� 0
	isSame = (a == b);

	// a != b;
	// �ٸ��� 1, ������ 0
	isDifferent = (a != b);

	// a > b : a�� b���� ũ��
	// a >= b : a�� b���� ũ�ų� ����?
	// ũ�� 1 �ƴϸ� 0
	isGreater = (a > b);

	// a < b : a�� b���� �۴�
	// a <= b : a�� b���� �۰ų� ����
	// ������ 1 �ƴϸ� 0
	isSmaller = (a < b);

#pragma endregion

#pragma region ������
	// ���� �ʿ��Ѱ�?
	// ex) ��� �������̰ų� ��� �����̸�? �� ���� ���� ������ �ʿ��� ���

	// ! not 
	// 0 �̸� 1, �� �� 0
	test = !isSame; // isDifferent�� ���� �ǹ�

	// && and
	// a && b -> �Ѵ� 1�̸� 1
	test = (hp <= 0 && isInvincible == false); // ����

	// || or
	// a || b -> �� �� �ϳ��� 1�̸� 1 (�Ѵ� 0 �̸� 0)
	test = (hp > 0 || isInvincible == true);


#pragma endregion
}
