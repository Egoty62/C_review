#include <stdio.h>
// 포인터로 문자열을 사용하는 방법
int main()
{
    char *dessert = "apple";

    printf("Today's dessert is %s.\n", dessert);
    dessert = "banana";    // dessert는 문자열 "banana"의 위치를 기억하게 됨
    printf("Tomorrow's dessert is %s.\n", dessert);

    return 0;
}