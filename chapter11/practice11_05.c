#include <stdio.h>
// 버퍼를 사용하는 문자입력
int main()
{
    char ch;
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }

    /*while(1)
    {
        scanf("%c", &ch);
        if (ch == '\n') break;
        printf("%c", ch);
    }*/
    // 한 줄의 데이터를 한 번에 출력 할 수 있음

    return 0;
}

/*  3 문자를 한 번에 입력해도 한 번에 출력 됨 
    최초 scanf 함수가 호출될 때 키보드로 문자열을 입력하면 문자열이 버퍼에 저장됨
    두 번째 scanf 함수 호출부터는 버퍼에 남아있는 문자열에서 차례로 다음 문자를 가져옴
    그렇기에 새로운 키보드 입력이 필요 없음
    scanf 함수가 버퍼에 저장된 데이터를 모두 가져온다면 키보드에서 추가로 데이터를 입력해야 함*/
