#include <stdio.h>
// 두 정수의 평균을 구하는 프로그램

void input_data(int *, int *);
double average(int, int);

int main()
{
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);
    printf("Avg of %d & %d : %.1lf\n", a, b, avg);

    return 0;
}