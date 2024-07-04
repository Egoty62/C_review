#include <stdio.h>
// 파일의 형태와 개방 모드가 다른 경우
int main()
{
    FILE *fp;
    int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};
    int i, res;

    fp = fopen("C:\\C (git)\\chapter18\\a.txt", "wb");  // 바이너리 파일로 개방
    for(i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);              // 배열 요소의 각 값에 해당하는 아스키문자 출력
    }
    fclose(fp);

    fp = fopen("C:\\C (git)\\chapter18\\a.txt", "rt");  // 텍스트 파일로 개방
    while(1)
    {
        res = fgetc(fp);                // 파일에서 한 문자 입력
        if(res == EOF) break;
        printf("%4d", res);             // 아스키 코드값 출력
    }
    fclose(fp);

    return 0;
}