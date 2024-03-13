#include <stdio.h>
// 재귀호출 함수

void fruit(int n);

int main()
{
    fruit(1);

    return 0;
}

void fruit(int n)
{
    printf("apple\n");
    if (n > 5) return;
    fruit(n + 1);
}