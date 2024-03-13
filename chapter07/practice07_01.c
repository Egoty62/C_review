#include <stdio.h>
// 2개의 함수로 만든 프로그램

int add(int x, int y); // 매개변수 이름을 생략할 수 있음
// int add(int, int);

int main()
{
    int a = 10, b = 20;
    int res;

    res = add(a, b);
    printf("result : %d\n", res);

    return 0;
}

int add(int x, int y)
{
    int temp;
    temp = x + y;

    return temp;
}