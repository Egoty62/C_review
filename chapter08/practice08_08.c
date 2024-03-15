#include <stdio.h>
#include <string.h>
// 빈칸을 포함한 문자열 입력
// char *gets(char *str)
// int puts(const char *str)
int main()
{
    char str[80];

    printf("enter a string : ");
    gets(str);
    printf("string after entered : "); // puts로 하면 \n이 자동 적용
    puts(str);

    return 0;
}