#include <stdio.h>
// 전역 변수에 extern과 static을 사용한 프로그램

int input_data();               // 양수를 입력하고 그 합 반환
double average();               // 평균을 구함
void print_data(double);        // 출력 함수

int cnt = 0;                    // 입력한 양수의 수 누적
static int tot = 0;             // 입력한 양수의 합

int main()
{
    double avg;                 // 입력한 양수의 평균

    tot = input_data();         // 양수를 입력하고 그 합 반환
    avg = average();            // 평균 계산
    print_data(avg);

    return 0;
}

void print_data(double avg)
{
    printf("Number of positive numbers entered : %d\n", cnt);
    printf("Total sum & mean : %d, %.1lf\n", tot, avg);
}