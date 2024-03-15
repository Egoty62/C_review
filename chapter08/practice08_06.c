#include <stdio.h>
// 널문자가 없는 문자열
int main()
{
    char str[5];

    str[0] = '0';
    str[1] = 'K';
    printf("%s\n", str);    // 널문자를 지정하지 않았기에 쓰레기값을 문자열로 출력

    return 0;
}