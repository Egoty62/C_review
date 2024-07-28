#include <stdio.h>
// #pragma를 이용한 바이트 얼라인먼트 변경

#pragma pack(push, 1)           // 바이트 얼라인먼트를 1로 바꿈
typedef struct
{
    char ch;
    int in;
} Sample1;

#pragma pack(pop)               // 바꾸기 전의 바이트 얼라인먼트 적용
typedef struct
{
    char ch;
    int in;
} Sample2;

int main()
{
    printf("Size of struct Sample1 : %dbyte\n", sizeof(Sample1));
    printf("Size of struct Sample2 : %dbyte\n", sizeof(Sample2));

    return 0;
}