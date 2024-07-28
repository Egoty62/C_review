#include <stdio.h>
// 다양한 매크로명의 사용

#define PI 3.14159              // 상수를 매크로명으로 정의
#define LIMIT 100.0             // 상수를 매크로명으로 정의
#define MSG "passed!"           // 문자열을 매크로명으로 정의
#define ERR_PRN printf("Out of range!\n")       // 출력문을 매크로명으로 정의

int main()
{
    double radius, area;

    printf("Enter the radius : ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    if(area > LIMIT) ERR_PRN;
    else printf("Area of circle : %.2lf (%s)\n", area, MSG);

    return 0;
}