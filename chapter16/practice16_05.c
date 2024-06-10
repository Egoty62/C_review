#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 동적 할당 영역의 문자열을 함수로 출력
void print_str(char **ps);

int main()
{
    char temp[80];
    char *str[21] = {0};        // 문자열을 연결할 포인터 배열, 널포인터로 초기화
    int i = 0;

    while(i < 20)
    {
        printf("Enter the String : ");
        gets(temp);
        if(strcmp(temp, "end") == 0) break;
        str[i] = (char *)malloc(strlen(temp));
        strcpy(str[i], temp);
        i++;
    }
    print_str(str);

    for(i = 0; str[i] != NULL; i++) // str에 연결된 문자열이 없을 때까지 반복
    {
        free(str[i]);
    }

    return 0;
}

void print_str(char **ps)
{
    while(*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}