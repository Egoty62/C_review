#include <stdio.h>

int main()
{
    int a; // int형 변수 선언
    int b, c; // 두 개의 int형 변수 동시 선언
    double da; // double형 변수 선언
    char ch; // char형 변수 선언

    a = 10;
    b = a; // int형 변수 b에 변수 a의 값 대입
    c = a + 20;
    da = 3.5;
    ch = 'A';

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);
    printf("da : %.1lf\n", da);
    printf("ch : %c\n", ch);

    return 0;
}