// 사용자 정의 헤더 파일을 사용하는 프로그램

/* 사용자 정의 헤더 파일 - student.h
typedef struct      // Student 구조체 선언
{
    int num;
    char name[20];
} Student;
*/

// 소스 파일 - main.c

#include <stdio.h>                  // 시스템 헤더 파이르이 내용 복사
#include "pra19_01_student.h"       // 사용자 정의 헤더 파일의 내용 복사

int main()
{
    Student a = {315, "Hong"};      // 구조체 변수 선언과 초기화
    printf("Student Number : %d, Name : %s\n", a.num, a.name);

    return 0;
}