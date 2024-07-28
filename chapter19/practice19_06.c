#include <stdio.h>
// #if, #ifdef, #else, #endif를 사용한 조건부 컴파일
#define VER 7                   // 치환될 부분이 있는 매크로명 정의
#define BIT16                   // 치환될 부분이 없는 매크로명 정의

int main()
{
    int max;

#if VER >= 6                            // 매크로명 VER이 6 이상이면
    printf("%d version.\n", VER);            // 이 문장 컴파일
#endif                                  // if의 끝

#ifdef BIT16                            // 매크로명 BIT16이 정의되어 있으면
    max = 32767;                        // 이 문장 컴파일
#else                                   // BIT16이 정의되어 있지 않으면
    max = 2147483647;                   // 이 문장 컴파일
#endif                                  // ifdef의 끝

    printf("max value of int type variable : %d\n", max);

    return 0;

}