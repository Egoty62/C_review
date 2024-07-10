#include <stdio.h>
#include <string.h>
// 여러 줄의 문장을 입력하여 한 줄로 출력
// char *fgets(char *, int, FILE *);
// int fputs(const char *, FILE *);
int main()
{
    FILE *ifp, *ofp;
    char str[80];
    char *res;

    ifp = fopen("C:\\C (git)\\chapter18\\pra1808-01.txt", "r");
    if(ifp == NULL)
    {
        printf("Can't open file(ifp).\n");
        return 1;
    }

    ofp = fopen("C:\\C (git)\\chapter18\\pra1808-02.txt", "w");
    if(ofp == NULL)
    {
        printf("Can't open file(ofp).\n");
        return 1;
    }

    while(1)
    {
        res = fgets(str, sizeof(str), ifp);
        if(res == NULL)
        {
            break;
        }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs(" ", ofp);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}