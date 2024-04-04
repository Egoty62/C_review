#include <stdio.h>
#include <string.h>
// strcat, strncat 함수를 사용한 문자열 붙이기
// char *strcat(char *dest, const char *src)
// char *strncat(char *dest, const char *src, size_t n)
int main()
{
    char str[80] = "straw";

    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);

    return 0;
}