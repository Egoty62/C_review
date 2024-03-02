#include <stdio.h>
// char형 변수의 사용
int main()
{
    char ch1 = 'A'; // 문자로 초기화
    char ch2 = 65; // 문자 A의 아스키 코드값으로 초기화

    printf("ASCII code of char %c : %d\n", ch1, ch1);
    printf("char whose ASCII code value is %d : %c\n", ch2, ch2);

    return 0;
}