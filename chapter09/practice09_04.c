#include <stdio.h>
// 포인터에 const 사용
int main()
{
    int a = 10, b = 20;
    const int *pa = &a; // 선언과 초기화를 동시에 할 때에는 주소를 나타내는 &를 붙여야 함
    // 포인터 변수를 const로 지정하면 간접참조(포인터를 이용)하여 변수를 바꿀 수 없음
    // *pa = 15; <= 오류 발생

    printf("value of variable a : %d\n", *pa);
    pa = &b;
    // *pa = 15; <= 오류 발생
    printf("value of variable b : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("value of variable a : %d\n", *pa);

    return 0;
}