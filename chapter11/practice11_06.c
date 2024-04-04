#include <stdio.h>
// 입력 문자의 아스키 코드값을 출력하는 프로그램
int main()
{
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch); // 문자 입력, Ctrl + Z를 누르면 -1 반환
        if (res == -1) break;   // 반환값이 -1이면 반복 종료
        printf("%d ", ch);       // 입력된 문자의 아스키 코드값 출력
    }

    return 0;
}