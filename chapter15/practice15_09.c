#include <stdio.h>
// void 포인터의 사용
int main()
{
    int a = 10;
    double b = 3.5;
    void *vp;           // void 포인터

    vp = &a;
    printf("a : %d\n", *(int *)vp);

    vp = &b;
    printf("b : %.1lf\n", *(double *)vp);

    return 0;
}