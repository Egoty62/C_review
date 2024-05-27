#include <stdio.h>
// 주소로 쓰이는 배열과 배열의 주소 비교
int main()
{
    int ary[5];

    printf("value of ary : %u\n", ary);     // 주소로서의 배열명의 값
    printf("address of ary : %u\n", &ary);  // 배열의 주소

    printf("ary + 1 : %u\n", ary + 1);      // 두 번째 배열의 주소값
    printf("&ary + 1 : %u\n", &ary + 1);    // 배열 전체가 끝난 다음의 주소값

    return 0;
}