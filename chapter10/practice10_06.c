#include <stdio.h>
// 배열의 값을 출력하는 함수

void print_ary(int *pa);

int main()
{
    int ary[5] = {10, 20, 30, 40, 50};

    print_ary(ary);

    return 0;
}

void print_ary(int *pa)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", pa[i]);
    }
}