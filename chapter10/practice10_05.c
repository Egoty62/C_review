#include <stdio.h>
// 포인터의 뺄셈과 관계 연산
int main()
{
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;
    int *pb = pa + 3;   // 네 번째 배열 요소의 주소

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb - pa : %u\n", pb - pa);      // 두 포인터의 뺄셈
    // 2가 나옴 ((pb - pa) / sizeof(int))

    if (pa > pb) printf("a : %d\n", *pa);
    else printf("b : %d\n", *pb);

    return 0;
}