#include <stdio.h>
#include <string.h>
// strcpy 함수의 사용법
// char *strcpy(char *dest, const char *src)
int main()
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";
    char *ps2 = str2;

    printf("first string : %s\n", str1);
    strcpy(str1, str2);
    printf("string after change : %s\n", str1);

    strcpy(str1, ps1);
    printf("string after change : %s\n", str1);

    strcpy(str1, ps2);
    printf("string after change : %s\n", str1);

    strcpy(str1, "banana");
    printf("string after change : %s\n", str1);

    strcpy(ps2, "apple");
    printf("%s\n", ps2);

    return 0;
}

/*  strcpy 함수의 첫 번째 인수는 char 배열이나 그 배열명을 저장한 포인터만 가능
    아래의 경우는 문법적으로는 가능하나 사용하면 안 됨
    strcpy("banana", "apple");  => 문자열 상수를 바꾸고자 함
    strcpy(ps1, "apple");       => ps1이 연결하고 있는 문자열 상수가 바뀜
*/