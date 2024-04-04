#include <stdio.h>
// gets 함수를 사용한 문자열 입력
int main()
{
    char str[80];

    printf("Enter string which have space char : ");
    gets(str);  // gets라 공백문자도 포함됨
    // gets 함수는 키보드로 엔터 키를 칠 때까지 입력한 한 줄을 배열에 저장
    // 엔터 키만 쳐도 입력을 끝냄
    // 버퍼에서 개행문자를 가져오지만 배열에서는 널문자로 저장됨
    printf("%s", str);

    return 0;
}