#include <stdio.h>
// 비트 필드 구조체를 사용한 자식 수 계산
struct children
{
    unsigned int son : 2;
    unsigned int daughter : 2;
    unsigned int pet : 3;
};

int main()
{
    struct children my = {1, 2, 3};             // 비트 필드 구조체 변수 초기화
    int sum;

    printf("Size of struct children : %d byte\n", sizeof(my));
    sum = my.son + my.daughter + my.pet;
    printf("Sum of children : %d\n", sum);

    return 0;
}
