#include <stdio.h>
// 구조체 포인터의 사용
struct score
{
    int kor;
    int eng;
    int mat;
};

int main()
{
    struct score yuni = {90, 80, 70};   // 구조체 변수 선언과 초기화
    struct score *ps = &yuni;           // 구조체 포인터에 주소 저장

    printf("Korean : %d\n", (*ps).kor); // 구조체 포인터로 멤버 접근
    printf("English : %d\n", ps -> eng);// -> 연산자 사용
    printf("Mathematics : %d\n", ps -> mat);

    return 0;
}
