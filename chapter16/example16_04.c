#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 16.2 연습문제 5
// 명령행 인수를 통해 문자열을 반복적으로 출력하는 프로그램 작성
int main(int argc, char **argv)
{
    int i;
    int count;

    if (argc != 3)
    {
        printf("Error\n");
        printf("Manual : example16_04 (String) (Number of repetitions)\n");
        exit(1);
    }
    count = atoi(argv[2]);

    for(i = 0; i < count; i++)
    {
        printf("%s\n", argv[1]);
    }

    return 0;
}