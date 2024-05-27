#include <stdio.h>
// 포인터와 이중 포인터의 관계
int main()
{
    int a = 10;
    int *pi;
    int **ppi;  // 이중 포인터 선언

    pi = &a;
    ppi = &pi;  // 포인터의 주소를 이중 포인터에 저장

    printf("-------------------------------------------\n");
    printf("var     value      &cal      *cal     **cal\n");
    printf("  a%10d%10u\n", a, &a);
    printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
    printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
    printf("-------------------------------------------\n");
    
    return 0;
}