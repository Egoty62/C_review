#include <stdio.h>
// 초기화된 2개의 2차원 배열에서 같은 위치에 같은 값이 있는 경우 그 수를 세여 출력
// 배열의 위치도 출력
int count_num(int (*pa1)[4], int (*pa2)[4], int (*same_num)[2]);

int main(void)
{
    int ary1[3][4] = {
        {15, 3, 9, 11},
        {23, 7, 10, 12},
        {0, 17, 55, 24}
    };
    int ary2[3][4] = {
        {13, 8, 9, 15},
        {23, 0, 10, 11},
        {29, 17, 43, 3}
    };
    int same_num[12][2];    // 위치와 값이 같은 경우 그 위치를 저장할 배열
    int i, cnt;             // 위치와 값이 같은 번호의 수 저장

    cnt = count_num(ary1, ary2, same_num);
    printf("match : %d\n", cnt);
    printf("loc(col, row)...\n");
    for(i = 0; i < cnt; i++)
    {
        printf("(%d, %d)\n", same_num[i][0], same_num[i][1]);
    }

    return 0;
}

int count_num(int (*pa1)[4], int (*pa2)[4], int (*same_num)[2])
{
    int i, j;
    int cnt = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if (pa1[i][j] == pa2[i][j])
            {
                same_num[cnt][0] = i;
                same_num[cnt][1] = j;
                cnt++;
            }
        }
    }


    return cnt;
}