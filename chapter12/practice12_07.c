#include <stdio.h>
// 문자열을 출력하는 puts, fputs 함수
// 두 함수는 문자열의 시작 위치부터 널문자가 나올 때 까지 모든 문자를 출력함
// puts 함수는 자동으로 줄을 바꿔줌
// 두 함수 모두 정상 출력된 경우 0을 반환, 출력 실패시 -1(EOF) 반환
// int puts(const char *str)
// int fputs(const char *str, FILE *stream)
int main()
{
    char str[80] = "apple juice";
    char *ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("milk");

    return 0;
}