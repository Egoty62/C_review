#include <stdio.h>
// 매개변수가 없는 함수

int get_pos(void);

int main()
{
    int res;

    res = get_pos();
    printf("result : %d\n", res);

    return 0;
}

int get_pos()
{
    int pos;

    printf("input : ");
    scanf("%d", &pos);  // 매개변수 앞에 &입력하는거 중요

    return pos;
}