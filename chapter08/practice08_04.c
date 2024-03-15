#include <stdio.h>
// sizeof 연산자를 사용한 배열
int main()
{
    int score[5];
    int i;
    int tot = 0;
    double avg;
    int cnt;                                // 배열 요소 수를 저장할 변수

    cnt = sizeof(score) / sizeof(score[0]); // 배열 요소 수 계산 (20 / 4)

    for(i = 0; i < cnt; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i = 0; i < cnt; i++)
    {
        tot += score[i];
    }
    avg = tot / (double)cnt;

    for(i = 0; i < cnt; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("average : %.1f\n", avg);

    return 0;
}