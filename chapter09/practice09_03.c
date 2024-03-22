#include <stdio.h>
// 포인터를 사용한 두 정수의 합과 평균 계산
int main()
{
    int a = 10, b = 15, tot;
    double avg;
    int *pa, *pb;       // 포인터 동시 선언
    int *pt = &tot;     // 포인터 선언과 초기화
    double *pg = &avg;  // avg가 double형이므로 포인터도 double형으로 선언

    // *p : 포인터 p가 가리키는 주소의 값 (a)
    // p : 포인터 p가 나타내는 주소 (&a)

    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;    // avg가 double형, tot가 int형이므로 tot를 double형으로 나눠야 함

    printf("value of two integers : %d, %d\n", *pa, *pb);
    printf("sum of two integers : %d\n", *pt);
    printf("average of two integers : %.1lf\n", *pg);

    return 0;
}