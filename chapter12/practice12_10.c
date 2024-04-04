#include <stdio.h>
#include <string.h>
// strncpy 함수를 사용한 문자열 복사
// char *strncpy(char *dest, const char *src, size-t n)
int main()
{
    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 7);   // "apple-pie"에서 7 문자만 복사
    printf("%s\n", str);

    return 0;
}