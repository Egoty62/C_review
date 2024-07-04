#include <stdio.h>
// 문자열을 한 문자씩 파일로 출력하기
// int fputc(int, FILE *);
int main()
{
    FILE *fp;
    char str[] = "banana";
    int i;

    fp = fopen("C:\\C (git)\\chapter18\\b.txt", "w");
    if (fp == NULL)
    {
        printf("Can't create file.\n");
        return 1;
    }

    i = 0;
    while(str[i] != '\0')
    {
        fputc(str[i], fp);          // 문자를 파일에 출력
        i++;                        // 다음 문자를 이동
    }
    fputc('\n', fp);
    fclose(fp);

    return 0;
}