#include <stdio.h>

extern int cnt;                 // main.c 파일의 전역 변수 cnt 공유
int tot = 0;                    // 전역 변수 선언

int input_data()
{
    int pos;

    while(1)
    {
        printf("Enter positive number : ");
        scanf("%d", &pos);
        if(pos < 0) break;
        cnt++;
        tot += pos;
    }

    return tot;
}