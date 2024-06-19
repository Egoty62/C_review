#include <stdio.h>
#include <stdlib.h>
// 16.2 연습문제 4
// 동적 할당을 사용하는 행렬의 합을 구하는 프로그램
int main()
{
    int *pa[3], *pb[3], *pc[3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        pa[i] = (int *) malloc(4 *sizeof(int));
        pb[i] = (int *) malloc(4 *sizeof(int));
        pc[i] = (int *) malloc(4 *sizeof(int));
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            pa[i][j] = i * 4 + j + 1;
            pb[i][j] = 12 - (i * 4 + j);
            pc[i][j] = pa[i][j] + pb[i][j];
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%5d", pc[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        free(pa[i]);
        free(pb[i]);
        free(pc[i]);
    }

    return 0;
}