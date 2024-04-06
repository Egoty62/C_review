#include <stdio.h>
// 키보드로 한 줄의 문장을 입력한 후 단어를 분리하여 출력하는 프로그램
char *my_token(char *ps);

int main()
{
    char str[80];
    char *p;

    printf("Enter the sentence : ");
    gets(str);

    while ((p = my_token(str)) != NULL)
    {
        printf("%s\n", p);
    }
    return 0;
}

char *my_token(char *ps)
{
   static char *pm;
   char *pt;

    if (pm == NULL)
    {
        pm = ps;
        pt = ps;
    }
    else pt = pm;

    if (*pm == '\0') return NULL;

    ps = pm;

    while (!((*ps == ' ') || (*ps == '\0')))
    {
        ps++;
        pm++;
    }

    if (*ps == ' ')
    {
        *ps = '\0';
        ps++;
        pm++;
    }

    return pt;
}