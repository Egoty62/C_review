#include <stdio.h>
// 이미 정의된 매크로의 기능
void func();

int main()
{
    printf("Date & Time of compilation : %s, %s\n\n", __DATE__, __TIME__);
    printf("Filename : %s\n", __FILE__);
    printf("Function name : %s\n", __FUNCTION__);
    printf("Number of line : %d\n", __LINE__);

#line 100 "macro.c"     // 행 번호를 100부터 시작, 파일명은 macro.c로 표시
    func();             // 여기부터 행 번호는 100으로 시작

    return 0;
}

void func()
{
    printf("\n");
    printf("Filename : %s\n", __FILE__);
    printf("Function name : %s\n", __FUNCTION__);
    printf("Number of line : %d\n", __LINE__);
}