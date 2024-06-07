#include <stdio.h>
#include <stdlib.h> // malloc, free 함수 사용을 위한 헤더 파일

/* 메모리를 동적 할당 할 때는 malloc, 반환할 때는 free 함수 사용
    void *malloc(unsigned int size);
    void free(void *p); */
// 동적 할당한 저장 공간을 사용하는 프로그램
int main()
{
    int *pi;                            // 동적 할당 영역을 연결할 포인터 선언
    double *pd;

    pi = (int *) malloc(sizeof(int));   // 메모리 동적 할당 후 포인터 연결
    if(pi == NULL)                      // 동적 할당에 실패하면 NULL 포인터 반환
    {
        printf("#Out of Memory\n");     // 예외 상황 메세지 출력
        exit(1);                        // 프로그램 종료
    }
    pd = (double *) malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("int : %d\n", *pi);          // 동적 할당 영역에 저장된 값 출력
    printf("double : %lf\n", *pd);

    free(pi);                           // 동적 할당 영역 반환
    free(pd);

    return 0;
}