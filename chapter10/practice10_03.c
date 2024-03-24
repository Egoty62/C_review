#include <stdio.h>
// 배열명처럼 사용되는 포인터
int main()
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];      // 대괄호를 써서 pa를 배열명처럼 사용

    for(i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);       // 배열 요소가 나옴
        printf("%10d", pa + i);     // 배열 주소가 나옴
        printf("%10d", *(pa + i));  // 배열 요소가 나옴
    }

    return 0;
}