#include <stdio.h>
// 지점별 실적 관리 프로그램
int compare(int a, int b);
void swap(int *a, int *b);

int main()
{
    int ary1[7] = {70, 45, 100, 92, 150, 81, 0};
    int ary2[7] = {88, 92, 77, 30, 52, 55, 0};
    int ary3[7] = {50, 90, 88, 75, 77, 49, 0};
    int ary4[7] = {120, 92, 80, 150, 130, 105, 0};
    int *pary2[4] = {ary1, ary2, ary3, ary4};
    int *pary1[4] = {ary1, ary2, ary3, ary4};
    int rank[4];
    char aryc2[4] = {'a', 'b', 'c', 'd'};
    char aryc1[4] = {'a', 'b', 'c', 'd'};
    int avg, i, j, sum;
    int *temp;
    char ctemp;

    for(i = 0; i < 4; i++)
    {
        sum = 0;
        for(j = 0; j < 6; j++)
        {
            sum += *(pary2[i] + j);
        }
        avg = sum / 6;
        pary2[i][6] = avg;
        rank[i] = avg;
    }

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 4; j++)
        {
            if (compare(rank[i], rank[j]) < 0)
            {
                swap(&rank[i], &rank[j]);
                temp = pary1[i];
                pary1[i] = pary1[j];
                pary1[j] = temp;
                ctemp = aryc1[i];
                aryc1[i] = aryc1[j];
                aryc1[j] = ctemp;
            }
        }
    }

    printf("1\n");
    for(i = 0; i < 4; i++)
    {
        printf("%c : ", aryc1[i]);
        for(j = 0; j < 7; j++)
        {
            printf("%5d", pary1[i][j]);
        }
        printf("\n");
    }

    printf("2\n");
    for(i = 0; i < 4; i++)
    {
        printf("%c : ", aryc2[i]);
        for(j = 0; j < 7; j++)
        {
            printf("%5d", pary2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int compare(int a, int b)
{
    if (a > b) return 1;
    else return -1;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}