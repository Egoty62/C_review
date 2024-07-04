#include <stdio.h>
// 파일을 열고 닫는 프로그램
// 파일을 개방할 때는 fopen 함수를 사용
// FILE *fopen(const char *, const char *);
// int fclose(FILE *);
int main()
{
    FILE *fp;                               // 파일 포인터

    fp = fopen("C:\\C (git)\\chapter18\\a.txt", "r");               // a.txt 파일을 읽기 전용으로 개방
    if (fp == NULL)
    {
        printf("Can't open file.\n");       // 안내 메세지 출력
        return 1;                           // 프로그램 종료
    }

    printf("File opened.\n");
    fclose(fp);                             // 파일 닫기

    return 0;
}