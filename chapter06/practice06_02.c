#include <stdio.h>
// for문을 사용한 반복문
int main()
{
    int a = 1;
    int i;

    for(i = 0; i < 3; i++)
    {
        a = a * 2;
    }
    printf("a : %d\n", a);

    int b = 1;

    for(i = 0; i < 10; i += 3)
    {
        b = b + 2;
    }
    printf("b : %d", b);

    return 0;
}