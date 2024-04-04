#include <stdio.h>
// getchar 함수를 사용한 문자열 입력

void my_gets(char *str, int size);

int main()
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("String : %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    char ch;
    int i = 0;

    ch = getchar();
    while ((ch != '\n') && (i < size -1))
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }   // do ~ while로 해도 될 듯
    str[i] = '\0';   // 널문자로 문자열의 마무리를 알림
}