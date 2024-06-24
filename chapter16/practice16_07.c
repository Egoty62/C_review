#include <stdio.h>
#include <string.h>
#include <stdlib.h>         // malloc, atoi 함수 사용
// 명령행 인수를 활용한 문자열 입력
void print_str(char **);    // 문자열 출력 함수 선언

int main(int argc, char **argv)
{
    char temp[80];          // 문자열 입력을 위한 임시 char 배열
    char **str;             // 포인터 배열로 사용할 동적 할당 영역 연결
    int max;                // 최대 입력 문자열 수를 저장
    int i;

    max = atoi(argv[1]);        // 두 번째 명령행 인수를 정수로 변환
    // int atoi(const char *str) : 문자열을 입력받아서 int 타입으로 변환하여 리턴
    str = (char **) malloc((max + 1) * sizeof(char *)); // 포인터 배열의 동적 할당
    i = 0;

    while(1)
    {
        printf("Enter the String : ");
        gets(temp);
        if(temp[0] == '\0') break;

        str[i] = (char *) malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;

        if(i == max)
        {
            printf("String input has filled all maximums.\n");
            break;
        }
    }
    str[i] = 0;             // 입력이 끝난 후 널포인터로 마감
    print_str(str);         // 입력된 문자열 출력

    i = 0;
    while(str[i] != 0)
    {
        free(str[i]);       // 문자열을 저장한 동적 할당 영역 반환
        i++;
    }
    free(str);              // 포인터 배열을 위해 동적 할당한 영역 반환
    return 0;
}

void print_str(char **ps)   // 2중 포인터 ps는 포인터 배열처럼 사용
{
    while((ps != 0))
    {
        printf("%s\n", *ps);
        ps++;
    }
}