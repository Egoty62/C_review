#include <stdio.h>
// 두 함수에서 같은 이름의 지역 변수를 사용한 경우
void assign();          // 함수 선언

int main()
{
    auto int a = 0;     // 지역 변수 선언과 초기화
    // auto는 생략 가능
    assign();
    printf("main function a : %d\n", a);

    return 0;
}

void assign()
{
    auto int a;         // main 함수에 있는 변수와 같은 이름의 지역 변수
    // 하지만 main 함수와는 다른 변수임
    a = 10;
    printf("assign function a : %d\n", a);
}