#include <stdio.h>
// 문자열을 저장하는 char형 배열
int main()
{
    char str[80] = "applejam";                               // 아래와 같음 (문자열 상수)
    // char str[80] = {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'}; <= 위와 같음 (문자 상수)
    /*
    str[0] = 'a';
    str[1] = 'p';
    str[2] = 'p';
    str[3] = 'l';
    str[4] = 'e';
    str[5] = '\0'; <= 문자열의 끝을 표시하는 용도로 
    */

    printf("first string : %s\n", str);
    printf("input string : ");
    scanf("%s", str);                   // str이 배열이라 주소(&)를 넣지 않음
    printf("string after input : %s\n", str);

    return 0;
}