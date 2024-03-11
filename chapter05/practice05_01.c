#include <stdio.h>
// if문의 기본 형식
// if ~ else문의 사용
int main()
{
    int a = 20;
    int b = 0;

    if(a > 10)
    {
        b = a;
    }

    printf("a : %d, b = %d\n", a, b);

    a = 10;

    if (a >= 0)
    {
        a = 1;
    }
    else
    {
        a = -1;
    }

    printf("a : %d\n", a);

    return 0;
}