#include <stdio.h>
// 포인터를 이용한 배열의 입출력
int main()
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    printf("value of array :");
    for(i = 0; i < 3; i++)
    {
        printf("%3d", *pa++);       // ary++ <= 안 됨, ary는 상수이므로 증가시킬 수 없음
        // 포인터를 사용했기에 증감연산자를 사용할 수 있음
    }

    return 0;
}