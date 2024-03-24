#include <stdio.h>
// 배열명에 정수 연산을 수행하여 배열 요소 사용
int main()
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    scanf("%d", ary + 2);           // 배열의 세 번째 요소 직접 입력

    for(i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }

    return 0;
}

// 주소 + 정수 => 주소 + (정수 * 주소를 구한 변수의 크기)
// int형의 배열이므로 (ary + 1은 ary 첫 요소의 주소) + 4