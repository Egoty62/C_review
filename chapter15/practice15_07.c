#include <stdio.h>
// 함수 포인터를 사용한 함수 호출
int sum(int, int);  // 함수 선언

int main()
{
    int (*fp)(int, int);    // 함수 포인터 선언
    int res;

    fp = sum;               // 함수명을 함수 포인터에 저장
    res = fp(10, 20);       // 함수 포인터로 함수 호출
    printf("result : %d\n", res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}