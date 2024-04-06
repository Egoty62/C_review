#include <stdio.h>
// 레지스터 변수를 반복문에 사용한 예
int main()
{
    register int i;
    // 자주 사용하는 변수를 레지스터 변수로 선언
    // 변수의 저장 공간이 램 메모리에 있을 때보다 빨라 프로그램 실행 시간을 줄임
    auto int sum = 0;

    for(i = 1; i <= 10000; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}