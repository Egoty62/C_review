#include <stdio.h>
// scanf 함수를 사용한 문자열 입력
// scanf 함수는 %s를 사용하여 공백이 없는 연속된 문자들을 입력받음
int main()
{
    char str[80];

    printf("Enter a String :" );
    scanf("%s", str);                           // %s를 사용하고 배열명을 줌
    printf("first word of string : %s\n", str); // 배열에 입력된 문자열 출력
    scanf("%s", str);   // 공백문자 제외 버퍼에 남아있는 문자열을 가져옴
    printf("Second word of string which is in buffer : %s\n", str);

    return 0;
}