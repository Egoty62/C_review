#include<stdio.h>
#include<string.h>
// 문자열을 대입하는 strcpy 함수
// strcpy 함수는 char형 배열에 새로운 문자열을 저장
// char *strcpy(char *dest, const char *src)
int main()
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

    return 0;
}