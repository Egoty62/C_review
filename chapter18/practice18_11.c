#include <stdio.h>
// fprintf와 fwrite 함수의 차이
// size_t fread(void *ptr, size_t size, size_t nitems, FILE *stream);
// size_t fwrite(const void *ptr, size_t size, size_t nitems, FILE *stream);
int main()
{
    FILE *afp, *bfp;
    int num = 10;
    int res;

    afp = fopen("C:\\C (git)\\chapter18\\pra1811-01.txt", "wt");
    fprintf(afp, "%d", num);            // num의 값을 문자로 변환하여 출력

    bfp = fopen("C:\\C (git)\\chapter18\\pra1811-02.txt", "wb");
    fwrite(&num, sizeof(num), 1, bfp);  // num의 값을 그대로 파일에 출력

    fclose(afp);
    fclose(bfp);

    bfp = fopen("C:\\C (git)\\chapter18\\pra1811-02.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);

    return 0;
}