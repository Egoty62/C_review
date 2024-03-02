#include <stdio.h>
// 여러 가지 정수형 변수
int main()
{
    short sh = 32767; // short형의 최댓값 초기화
    int in = -2147483648; // int형의 최솟값 초기화
    long ln = 2147483647; // long형의 최댓값 초기화
    long long lln = 123451234512345; // 아주 큰 값 초기화

    printf("short type variable : %d\n", sh);
    printf("int type variable : %d\n", in);
    printf("long type variable : %ld\n", ln);
    printf("long long type variable : %lld\n", lln); // long long형은 lld로 출력
    printf("size of long long type : %d byte\n", sizeof(long long));

    return 0;
}