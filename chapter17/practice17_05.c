#include <stdio.h>
// 구조체를 반환하여 두 변수의 값 교환
struct vision               // 로봇의 시력을 저장할 구조체
{
    double left;            // 왼쪽 눈
    double right;           // 오른쪽 눈
};

struct vision exchange(struct vision);      // 두 시력을 바꾸는 함수

int main()
{
    struct vision robot;                    // 구조체 변수 선언

    printf("Enter vision : ");
    scanf("%lf%lf", &(robot.left), &(robot.right)); // 시력 입력
    robot = exchange(robot);                        // 교환함수 호출
    printf("Exchanged vision : %.1lf, %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)         // 구조체를 반환하는 함수
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;                                   // 구조체 변수 반환
}