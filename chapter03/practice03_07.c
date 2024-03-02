#include <stdio.h>
#include <string.h>
// char 배열에 문자열 저장 & 복사
int main()
{
    char fruit[20] = "strawberry"; // char 배열 선언과 초기화
    // fruit = "banana"; <= 배열은 선언된 이후 대입 연산자로 문자열 입력 불가

    printf("%s\n", fruit);  // 배열명으로 strawberry 출력
    printf("%s %s\n", fruit, "jam"); // 문자열은 %s로 출력

    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    return 0;
}