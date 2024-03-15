#include <stdio.h>
// 배열과 반복문을 사용한 성적처리 프로그램
int main()
{
    int score[5];
    int i;
    int tot = 0;
    double avg;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i = 0; i < 5; i++)
    {
        tot += score[i];
    }
    avg = tot / 5.0;

    for(i = 0; i < 5; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("average : %.1f\n", avg);
}