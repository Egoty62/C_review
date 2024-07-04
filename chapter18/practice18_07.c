#include <stdio.h>
#include <string.h>
// a+ 모드로 파일의 내용을 확인하며 출력
// int fseek(FILE *stream, long offset, int whence);
int main()
{
    FILE *fp;
    char str[20];

    fp = fopen("C:\\C (git)\\chapter18\\a.txt", "a+");  // 읽기 가능한 추가 모드로 개방
    if (fp == NULL)
    {
        printf("Can't create file.\n");
        return 1;
    }

    while(1)
    {
        printf("Fruit name : ");
        scanf("%s", str);
        if(strcmp(str, "end") == 0) break;
        else if(strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);             // 버퍼의 위치 지시자를 맨 처음으로 이동
            while(1)
            {
                fgets(str, sizeof(str), fp);    // 과일 이름을 읽음
                if(feof(fp)) break;             // 파일의 내용을 모두 읽으면 종료
                printf("%s", str);
            }
            
        }
        else fprintf(fp, "%s\n", str);          // 입력한 과일 이름을 파일에 출력
    }
    fclose(fp);

    return 0;
}