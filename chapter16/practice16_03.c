#include <stdio.h>
#include <stdlib.h>
// calloc, realloc 함수를 사용한 양수 입력
// void *calloc(unsigned int, unsigned int);
// void *realloc(void *, unsigned int);
int main()
{
    int *pi;                // 할당한 저장 공간을 연결할 포인터
    int size = 5;           // 한 번에 할당할 저장 공간의 크기(int형 변수 5개씩)
    int cnt = 0;            // 현재 입력된 양수 개수
    int num;                // 양수를 입력할 변수
    int i;                  // 반복 제어 변수

    pi = (int *) calloc(size, sizeof(int));     // 먼저 5개의 저장 공간 할당
    while(1)
    {
        printf("Enter the Positive Number => ");
        scanf("%d", &num);
        if(num <= 0) break;
        if(cnt == size)
        {
            size += 5;      // 크기를 늘려서 재할당
            pi = (int *)realloc(pi, size *sizeof(int));
            // realloc(이미 할당한 저장 공간의 포인터, 재할당 후 정체 저장 공간의 크기)
        }
        pi[cnt++] = num;
    }
    for(i = 0; i < cnt; i++)
    {
        printf("%5d", pi[i]);
    }

    free(pi);

    return 0;
}