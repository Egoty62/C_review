#include <stdio.h>
// 2차원 배열
int main()
{
    int score[3][4];
    int tot;
    double avg;
    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("Enter scores");
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        tot = 0;
        for(j = 0; j < 4; j++)
        {
            tot += score[i][j];
        }
        avg = tot / 4.0;
        printf("total : %d, average : %.2lf\n", tot, avg);
    }

    return 0;
}
