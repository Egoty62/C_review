#include <stdio.h>
// 주소와 포인터의 크기
int main()
{
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("size of address for char type variable : %d\n", sizeof(&ch));
    printf("size of address for int type variable : %d\n", sizeof(&in));
    printf("size of address for double type variable : %d\n", sizeof(&db));

    printf("size of char * pointer : %d\n", sizeof(pc));
    printf("size of int * pointer : %d\n", sizeof(pi));
    printf("size of double * pointer : %d\n", sizeof(pd));

    printf("size of the variable that the char * pointer points to : %d\n", sizeof(*pc));
    printf("size of the variable that the int * pointer points to : %d\n", sizeof(*pi));
    printf("size of the variable that the double * pointer points to : %d\n", sizeof(*pd));

    return 0;
}