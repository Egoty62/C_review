#include <stdio.h>
// 주소를 반환하여 두 정수의 합 계산
int *sum(int a, int b);     // int형 변수의 주소를 반환하는 함수 선언

int main()
{
    int *p;

    p = sum(10, 20);
    printf("%d\n", *p);

    return 0;
}

int *sum(int a, int b)
{
    static int res;

    res = a + b;

    return &res;
}