#include <stdio.h>
// 함수 포인터로 원하는 함수를 호출하는 프로그램
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main()
{
    int sel;

    printf("1. sum of two integers\n");
    printf("2. multiple of two integers\n");
    printf("3. maximum value of two integers\n");
    printf("select progress : ");

    scanf("%d", &sel);

    switch(sel)
    {
        case 1 : func(sum); break;
        case 2 : func(mul); break;
        case 3 : func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("input two integers : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("result : %d\n", res);
}

int sum(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}