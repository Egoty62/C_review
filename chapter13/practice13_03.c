#include <stdio.h>
// 전역 변수의 사용
void assign10(void);
void assign20(void);

int a;      // 전역변수 선언

int main()
{
    printf("a : %d\n", a);

    assign10();
    assign20();

    printf("a : %d\n", a);

    return 0;
}

void assign10()
{
    a = 10; // 전역 변수 a에 10 대입
}

void assign20()
{
    int a;  // 전역 변수와 같은 이름의 지역 변수 선언

    a = 20; // 지역 변수 a에 20 대입
}