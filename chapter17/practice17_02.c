#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 배열과 포인터를 멤버로 갖는 구조체 사용
struct profile                          // 신상명세 구조체 선언
{
    char name[20];                      // 이름을 저장할 배열 멤버
    int age;                            // 나이
    double height;                      // 키
    char *intro;                        // 자기소개를 위한 포인터
};

int main()
{
    struct profile yuni;                // profile 구조체 변수 선언

    strcpy(yuni.name, "yuni");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char *) malloc(80);
    printf("Introduce yourself : ");
    gets(yuni.intro);
    
    printf("Name : %s\n", yuni.name);
    printf("Age : %d\n", yuni.age);
    printf("Height : %.1lf\n", yuni.height);
    printf("Intro : %s\n", yuni.intro);
    
    free(yuni.intro);

    return 0;
}