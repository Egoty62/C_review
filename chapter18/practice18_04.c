#include <stdio.h>
// 표준 입출력 스트림을 사용한 문자열 입력
int main()
{
    int ch;

    while(1)
    {
        ch = getchar();     // 키보드에서 문자 입력
        if(ch == EOF)       // Crtl + Z로 입력 종료
        {
            break;
        }
        putchar(ch);
    }

    return 0;
}