#include <stdio.h>
// 허용되지 않는 포인터의 대입
int main()
{
    int a = 10;
    int *p = &a;
    double *pd;

    // pd = p; <= double형 포인터인 pd와 int형 포인터인 p는 서로 대입될 수 없음
    // 형변환을 사용한 포인터의 대입은 가능
    pd = (double *)p;

    printf("%lf\n", *pd);

    return 0;
}