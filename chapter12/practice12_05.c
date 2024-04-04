#include <stdio.h>
// fgets 함수를 사용한 문자열 입력
// fgets 함수는 최대 배열의 크기까지만 문자열을 입력함
int main()
{
    char str[10];

    printf("Enter : ");
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);

    return 0;
}