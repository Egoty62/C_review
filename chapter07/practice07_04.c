#include <stdio.h>
// 반환값과 매개변수가 모두 없는 함수

void print_line();

int main()
{
    print_line();
    printf("Student ID\t Name\t Major\t Grade\n");
    print_line();

    return 0;
}

void print_line(void)
{
    int i;

    for(i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
}