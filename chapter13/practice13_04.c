#include <stdio.h>
// auto 지역 변수와 static 지역 변수의 비교

void auto_func();
void static_func();

int main()
{
    int i;

    printf("auto...\n");
    for(i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("static...\n");
    for(i = 0; i < 3; i++)
    {
        static_func();
    }

    return 0;
}

void auto_func()
{
    auto int a = 0;
    // auto 변수는 함수블록이 끝남과 동시에 메모리에서 제거됨
    a++;
    printf("%d\n", a);
}

void static_func()
{
    static int a;
    // static 변수는 프로그램이 끝나기 전까지 계속 메모리가 남아있음
    // static 변수는 초기화 하지 않았다면 자동으로 0으로 초기화 됨
    // 정적 지역 변수는 선언된 블록 안에서만 사용하는 전역 변수
    a++;
    printf("%d\n", a);
}