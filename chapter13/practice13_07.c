#include <stdio.h>
// 포인터를 써서 변수의 값에 10을 더하는 경우
void add_ten(int *p);

int main()
{
    int a = 10;

    add_ten(&a);
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int *p)
{
    *p += 10;
}