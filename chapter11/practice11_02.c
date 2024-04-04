#include <stdio.h>
// 대문자를 소문자로 변경
int main()
{
    char small, cap = 'G';

    if ( (cap >= 'A') && (cap <= 'Z') )
    {
        small = cap + ('a' - 'A');
    }
    printf("Uppercase : %c %c", cap, '\n'); // '\n'을 %c로 출력하면 줄이 바뀜
    printf("Lowercase : %c", small);

    return 0;
}

// 아스키 코드를 이용하여 대문자와 소문자 변환이 가능 (26을 더하거나 빼거나)