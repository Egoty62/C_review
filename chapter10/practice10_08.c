#include <stdio.h>
// 배열에 값을 입력하는 함수

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main()
{
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("max value of array : %.1f\n", max);

    return 0;
}

void input_ary(double *pa, int size)
{
    int i;

    printf("Enter %d real number values : ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%lf", &pa[i]);  // pa + i 도 가능, pa 자체가 주소라서 &가 여기서는 없음
    }
}

double find_max(double *pa, int size)
{
    double max;
    int i;

    max = pa[0];
    for(i = 1; i < size; i++)
    {
        if (*(pa + i) > max)
        {
            max = *(pa + i);
        }
    }

    return max;     // 최댓값 반환
}