#include <iostream>
using namespace std;


// 분기문
// 데이터를 메모리에 할당하고 가공하고 

int main()
{
#pragma region 조건문
    int hp = 100;
    int damage = 100;

    hp -= damage;
    bool isDead = (hp <= 0);

    // 몬스터가 죽었으면 경험치 추가
    // 어셈블리에서 CMP JMP


    //if case
    //변수자체를 사용하는 경우
    if (isDead)
        cout << "몬스터를 처치했습니다" << endl;
    
    // not를 사용하는 경우
    // 스타일마다 다르나 가독성이나 헷갈림등을 고려하여 사용할 떄 유의가 필요한 스타일
    //if (!isDead)
    //cout << "몬스터가 반격했습니다" << endl;
    
    
    //if else
    if (isDead)
        cout << "몬스터를 처치했습니다" << endl;
    else if (hp <= 20)
        cout << "몬스터가 도망가고 있습니다" << endl;
    else
        cout << "몬스터가 반격했습니다" << endl;



    // 가위바위보

    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int input = ROCK; //test용 변수

    if (input == ROCK)
        cout << "바위를 냈습니다" << endl;
    else if (input == PAPER)
        cout << "보를 냈습니다" << endl;
    else if (input == SCISSORS)
        cout << "가위를 냈습니다" << endl;
    else //예외처리
        cout << "뭘 낸겁니까?" << endl;


    //switch-case
    //정수 계열만 넣을 수 있다.
    switch (input)
    {
    case ROCK:
        cout << "바위를 냈습니다" << endl;
        break;
    case PAPER:
        cout << "보를 냈습니다" << endl;
        break;
    case SCISSORS:
        cout << "가위를 냈습니다" << endl;
        break;
    default:
        cout << "뭘 낸겁니까?" << endl;
        break;
    }
#pragma endregion




}
