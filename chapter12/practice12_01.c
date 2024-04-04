#include <stdio.h>
// 문자열 상수가 주소란 증거
int main()
{
    printf("address : %p\n", "mango");              // 주소값 출력
    // p는 주로 포인터를 출력할 때 사용하는 변환문자, 포인터값을 16진수 대문자로 출력
    printf("first char : %c\n", *"mango");          // 간접참조 연산
    printf("second char : %c\n", *("mango" + 1));   // 포인터 연산식
    printf("third char : %c\n", "mango"[2]);        // 배열 표현식

    return 0;
}