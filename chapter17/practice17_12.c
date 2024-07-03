#include <stdio.h>
// 열거형을 사용한 프로그램
enum season {SPRING, SUMMER, FALL, WINTER}; // 열거형 선언

int main()
{
    enum season ss;
    char *pc;

    ss = SPRING;
    switch(ss)
    {
        case SPRING :
            pc = "inline"; break;
        case SUMMER :
            pc = "swimming"; break;
        case FALL :
            pc = "trip"; break;
        case WINTER :
            pc = "skiing"; break;
    }

    printf("My leisure activity => %s\n", pc);

    return 0;
}