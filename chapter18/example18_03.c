#include <stdio.h>
#include <string.h>
// 도전 실전 예제 3번
// 출판사 매출 관리 프로그램
/*  책 제목, 매출단가(만원 단위), 판매 부수(양수 출고, 음수 반품)를 저장한 파일
    데이터를 읽어 도서별 최종 매출액 출력
    책 종류는 10개 이하로 가정, 매출이 가장 높은 책부터 정렬하여 파일로 출력  */
int main()
{
    FILE *ifp, *ofp;
    char bookname[80];
    char *str[11] = {0};
    int sum[11] = {0, };
    double cost;
    int i, j, cnt;
    int temp;

    ifp = fopen("C:\\C (git)\\Chapter18\\ex1803-01.txt", "r");
    if(ifp == NULL) return 1;

    fgets(bookname, sizeof(bookname), ifp);
    bookname[strlen(bookname) - 1] = '\0';
    fscanf(ifp, "%lf %d", cost, cnt);
    fgetc(ifp);         // 개행문자 제거
    // 반복문 시작
    for(i = 0; i < 11; i++)
    {
        if(str[i] == NULL)
        {
            str[i] = (char *)malloc(strlen(bookname));
            strcpy(str[i], bookname);
            sum[i] = (int)(cost * cnt * 10000);
            break;
        }

        if(strcmp(str[i], bookname) == 0)
        {
            sum[i] += (int)(cost * cnt * 10000);
            break;
        }
    }

    for(i = 0; i < 11; i++)
    {
        if(str[i] == NULL) break;
        for(j = i + 1; j < 11; j++)
        {
            if (str[j] == NULL) break;
            if(sum[i] < sum[j])
            {
                temp = sum[j];
                sum[j] = sum[i];
                sum[i] = temp;

                strcpy(bookname, str[j]);
                strcpy(str[j], str[i]);
                strcpy(str[i], bookname);
            }
        }
    }
    
    ofp = fopen("C:\\C (git)\\Chapter18\\ex1803-02.txt", "w");
    if(ofp == NULL) return 1;

    for(i = 0; i < 11; i++)
    {
        if(str[i] == NULL) break;
        fprintf(ofp, "%d. %s - %d\n", i + 1, str[i], sum[i]);
    }
    
    for(i = 0; i < 11; i++)
    {
        free(str[i]);
    }
    // 반복문 종료
    fclose(ifp);
    fclose(ofp);

    return 0;
}