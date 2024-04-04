#include <stdio.h>
// strcpy와 기능이 같은 함수의 구현

char *my_strcpy(char *pd, char *ps);    // 함수 선언

int main()
{
    char str[80] = "strawberry";

    printf("string before change : %s\n", str);
    my_strcpy(str, "apple");
    printf("string after change : %s\n", str);
    printf("%s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char *my_strcpy(char *pd, char *ps)
{
    char *po = pd;  // pd값을 나중에 반환하기 위해 보관

    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return po;      // 복사가 끝난 저장 공간의 시작 주소 반환
}