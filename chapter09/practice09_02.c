#include <stdio.h>
// 포인터의 선언과 사용
int main()
{
    int a;
    int *pa;    // 포인터 선언

    pa = &a;
    *pa = 10;

    printf("print a by pointer : %d\n", *pa);
    printf("print a by variable name : %d\n", a);

    return 0;
}