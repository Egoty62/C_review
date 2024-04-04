#include <stdio.h>
#include <string.h>
// strlen 함수를 활용하여 두 문자열 중 길이가 긴 단어 출력
// size_t strlen(const char *str)
int main()
{
    char str1[80], str2[80];
    char *resp;

    printf("Enter 2 strings : ");
    scanf("%s%s", str1, str2);

    if (strlen(str1) > strlen(str2)) resp = str1;
    else resp = str2;

    printf("%s\n", resp);

    return 0;
}