#include <stdio.h>
// getchar와 putchar 함수 사용
int main()
{
    int ch;

    ch = getchar();
    printf("string : ");
    putchar(ch);
    putchar('\n');

    return 0;
}