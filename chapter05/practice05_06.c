#include <stdio.h>
// switch ~ case문의 사용
int main()
{
    int rank = 2, m = 0;

    switch (rank) // rank의 값이 얼마인지 확인
    {
        case 1 :    // rank가 1이면 아래 블록 수행
            m = 300;
            break;  // break;가 없으면 아래 case도 순차적으로 진행함
        case 2 :
            m = 200;
            break;
        case 3 :
            m = 100;
            break;
        default :   // case 여부와 상관없이 기본적으로 수행됨
            m = 10;
            break;
    }

    printf("m : %d\n", m);

    return 0;
}