#include <stdio.h>
// stdin과 stdout을 사용한 문자 입출력
int main()
{
    int ch;

    while(1)
    {
        ch = fgetc(stdin);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }

    return 0;
}