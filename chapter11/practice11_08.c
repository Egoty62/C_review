#include <stdio.h>
// fflush 함수가 필요한 경우
// int fflush(FILE *stream)
int main()
{
    int num, grade;

    printf("Student number : ");
    scanf("%d", &num);              // 학번 입력
    fflush(stdin);                  // 버퍼에 남아있는 개행문자 제거
    printf("Score : ");
    grade = getchar();              // 학점 입력
    printf("Number : %d, Score : %c", num, grade);

    return 0;
}