#include <stdio.h>
// 쓰레기값의 출력과 초기화 방법
int main()
{
    int a;
    int b = 20; // 변수 선언과 동시에 초기화
    int c; // 초기화 x

    a = 10;
    
    printf("a, b, c : %d, %d, %d\n", a, b, c);

    return 0;
}