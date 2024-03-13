#include <stdio.h>
// do ~ while을 사용한 반복문
int main()
{
    int a = 1;

    do
    {
        a = a * 2;
    } while (a < 10);
    printf("a : %d", a);

    // do a = a * 2; while (a < 10); <= 한 문장일 경우 이렇게 작성도 가능

    return 0;
}