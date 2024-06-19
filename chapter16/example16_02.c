#include <stdio.h>
#include <stdlib.h>
// 16.2 연습문제 1
// 4행 5열의 행렬의 값을 저장할 2차원 배열을 동적 할당하는 코드
int main()
{
    int **matrix;
    int i;

    matrix = (int **) malloc(4 * sizeof(int *));
    
    for(i = 0; i < 4; i++)
    {
        matrix[i] = (int *) malloc(5 * sizeof(int));
    }

    for(i = 0; i < 4; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}