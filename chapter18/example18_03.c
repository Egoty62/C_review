#include <stdio.h>
#include <string.h>
// 도전 실전 예제 3번
// 출판사 매출 관리 프로그램
/*  책 제목, 매출단가(만원 단위), 판매 부수(양수 출고, 음수 반품)를 저장한 파일
    데이터를 읽어 도서별 최종 매출액 출력
    책 종류는 10개 이하로 가정, 매출이 가장 높은 책부터 정렬하여 파일로 출력  */
struct book
{
    char name[80];
    double cost;
    int sell;
    int sum;
};

int main()
{
    FILE *ifp, *ofp;
    char temp[80];

    ifp = fopen("C:\\C (git)\\chapter18\\ex1803-01.txt", "r");
    if(ifp == NULL) return 1;


    while(1)
    {
        if(fgets(temp, sizeof(temp), ifp) == NULL) break;
        temp[strlen(temp) - 1] = '\0';

    }
}