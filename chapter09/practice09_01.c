#include <stdio.h>
// 변수의 메모리 주소 확인
int main()
{
    int a;
    double b;
    char c;

    printf("address of int type variable : %u\n", &a);
    printf("address of double type variable : %u\n", &b);
    printf("address of char type variable : %u\n", &c);
    // 주소 값은 무조건 양수이므로 %u를 쓰는게 더 편함

    return 0;
}