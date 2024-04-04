#include <stdio.h>
// 개행문자로 인해 gets 함수가 입력을 못 하는 경우
int main()
{
    int age;
    char name[20];

    printf("age : ");
    scanf("%d", &age);
    printf("name : ");
    gets(name);
    printf("age : %d, name : %s\n", age, name);

    return 0;
}

// gets 함수는 버퍼에 있는 개행문자를 name 배열에서 널 문자로 바꾸기 때문에 입력이 안 됨