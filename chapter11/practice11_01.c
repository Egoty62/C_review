#include <stdio.h>
// 정수처럼 사용되는 문자
int main()
{
    int ch;                             // int형 변수

    printf("%d\n", 'a');                // 문자 'a'의 아스키 코드 값
    printf("%c\n", 97);                 // 아스키 코드 값이 97인 문자
    printf("%d byte\n", sizeof('a'));   // 문자 상수의 크기

    ch = 'a';                           // 문자를 int형 변수에 대입
    ch++;                               // 아스키 코드 값 1 증가
    printf("%c : %d\n", ch, ch);

    return 0;
}