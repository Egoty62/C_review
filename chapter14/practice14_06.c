#include <stdio.h>
// 포인터 배열로 여러 개의 문자열 출력
int main()
{
    char *pary[5];  // 포인터 배열 선언
    int i;

    pary[0] = "dog";    // 배열 요소에 문자열 대입
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";
    // 문자열 상수는 변경이 불가능한 메모리 영역에 보관됨
    // 포인터 배열에는 그 첫 번째 문자의 주소가 저장됨
    // char *pary[5] = {"dog", "elephant", "horse", "tiger", "lion"};
    // char animal[5][20] = {"dog", "elephant", "horse", "tiger", "lion"};
        // 2차원 char 배열과 초기화 방법이 같음

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }

    return 0;
}