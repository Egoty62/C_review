#include <stdio.h>
// 블록 안에 지역 변수를 사용하여 두 변수를 교환하는 프로그램
int main()
{
    int a = 10, b = 20;

    printf("Before - a : %d, b : %d\n", a, b);
    {
        int temp;
        // 여기에 선언된 변수 temp는 8 ~ 14행의 블록 안에 선언된 지역 변수
        // 사용 범위가 그 블록 내부로 제한됨
        temp = a;
        a = b;
        b = temp;
        
    }
    printf("After - a : %d, b : %d\n", a, b);

    return 0;
}