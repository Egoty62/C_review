#include <stdio.h>
#include <stdlib.h>
// 동적 할당 영역을 배열처럼 사용
int main()
{
    int *pi;                                // 동적 할당 영역을 연결할 포인터
    int i, sum = 0;                         // 반복 제어 변수와 누적 변수

    pi = (int *) malloc(5 * sizeof(int));   // 저장 공간 20바이트 할당
    if (pi == NULL)
    {
        printf("Out of Memory\n");
        exit(1);
    }
    printf("Enter ages of 5 people : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("Avg of ages : %.1lf\n", (sum / 5.0));
    free(pi);                               // 할당한 메모리 영역 반환

    return 0;
}