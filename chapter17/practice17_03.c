#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 다른 구조체를 멤버로 갖는 구조체 사용
struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;          // profile 구조체를 멤버로 사용
    int id;
    double grade;
};

int main()
{
    struct student yuni;

    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("Age : %d\n", yuni.pf.age);
    printf("Height : %.1lf\n", yuni.pf.height);
    printf("Student ID : %d\n", yuni.id);
    printf("Grade : %.1lf\n", yuni.grade);

    return 0;
}