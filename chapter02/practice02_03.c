#include <stdio.h>

int main(void)
{
    /*
    \n : 개행(줄을 바꿈)
    \t : 탭(출력 위치를 다음 텝 위치로 옮김)
    \r : 캐리지 리턴(출력 위치를 줄의 맨 앞으로 옮김)
    \b : 백스페이스(출력 위치를 한 칸 왼쪽으로 옮김)
    \a : 알럿(경보 벨 소리를 냄)
    */
    printf("123123123123\n");
    printf("be happy\n");
    printf("my\tfriend\n");
    printf("goot\bd\tchance\n");
    printf("cow\rW\a\n");

    return 0;
}