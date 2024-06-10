#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 16.1-5 예제
/*  메모를 반복 입력하여 이어붙이는 프로그램 작성
    새로운 메모를 입력할 때마다
        입력한 메모의 전체 길이에 맞게 동적 할당 영역 조정
            메모를 이어붙임
    한 번에 입력 가능한 메모 길이는 30자로 제한
    end를 입력하거나 사용 가능한 동적 할당 메모리가 없으면 입력을 끝냄*/
int main()
{
    char temp[32];
    char *ps, *pt;
    int len = 1;

    ps = (char *)calloc(1, sizeof(char));

    while(1)
    {
        printf("Enter memo : ");
        gets(temp);
        if(strlen(temp) >= 30)
        {
            printf("Do not enter over 30 characters. Please enter again.\n");
            continue;
        }
        temp[strlen(temp)] = '\0';
        if(strcmp(temp, "end") == 0) break;
        len += strlen(temp) + 1;
        pt = (char *)realloc(ps, len);
        if(pt == NULL)
        {
            printf("Out of Memory\n");
            break;
        }
        // realloc 함수가 재할당에 실패한 경우
        // 반환되는 널포인터를 ps에 직접 저장하면
        // 반복문을 빠져나간 후 그 이전까지 입력한 문자열을 출력할 수 없음
        // 따라서 널포인터를 확인하기 위해 임시 포인터 pt 사용
        ps = pt;    // pt가 재할당에 성공한 경우에만 ps 연결
        strcat(ps, temp);
        strcat(ps, " ");

    }
    printf("%s\n", ps);
    free(ps);

    return 0;
}