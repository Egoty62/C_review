#include <stdio.h>
// 중괄호를 사용한 구조체의 초기화
struct student
{
    int id;
    char name[20];
    double grade;
};

int main()
{
    struct student  s1 = {315, "Apple", 2.4},   // 구조체 변수 선언과 초기화
                    s2 = {316, "Banana", 3.7},
                    s3 = {317, "Carrot", 4.4};

    struct student max;                         // 최고 학점 저장할 구조체 변수

    max = s1;
    if(s2.grade > max.grade) max = s2;
    if(s3.grade > max.grade) max = s3;

    printf("ID : %d\n", max.id);
    printf("Name : %s\n", max.name);
    printf("Grade : %.1f\n", max.grade);

    return 0;    
    
}