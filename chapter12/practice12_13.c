#include <stdio.h>
#include <string.h>
// strcmp, strncmp 함수를 사용한 문자열 비교
// int strcmp(const char *str1, const char *str2)
// int strncmp(const char *str1, const char *str2, size_t n)
int main()
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("Fruit that comes out later in the dictionary : ");
    if (strcmp(str1, str2) > 0)     // str1이 str2보다 크면(사전에 나중에 나오면)
    {
        printf("%s\n", str1);
    }
    else printf("%s\n", str2);

    printf("If you compare the first three characters : ");
    if (strncmp(str1, str2, 3) == 0) printf("Same");
    else printf("Different");
}

/*  strcmp(str1, str2);
    str1이 str2보다 사전에 나중에 나오면(크면?) 1 반환
    str1이 str2보다 사전에 먼저 나오면(작으면?) -1 반환
    str1과 str2가 같은 문자열이면 0 반환 */