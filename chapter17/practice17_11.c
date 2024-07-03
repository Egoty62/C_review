#include <stdio.h>
// 공용체를 사용한 학번과 학점 데이터 처리
union student                           // 공용체 선언
{
    int num;
    double grade;
};

int main()
{
    union student s1 = {315};           // 공용체 변수의 선언과 초기화

    printf("Student number : %d\n", s1.num);
    s1.grade = 4.4;                     // 학점 멤버에 값 대입
    printf("grade : %.1lf\n", s1.grade);
    printf("Student number : %d\n", s1.num);

    return 0;
}