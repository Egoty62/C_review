#include <stdio.h>
// 포인터를 사용한 두 변수의 값 교환

void swap(int *pa, int *pb);

int main()
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

// 위 함수에서 포인터를 사용하면 swap 함수에서 반환값을 따로 만들지 않아도 변수들을 바꿀 수 있음