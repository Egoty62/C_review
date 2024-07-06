#include <stdio.h>
// 다양한 자료형을 형식에 맞게 입출력
// int fscanf(FILE *, const char *, ...);
// int fprintf(FILE *, const char *, ...);
int main()
{
    FILE *ifp, *ofp;
    char name[20];
    int kor, eng, mat;
    int tot;
    double avg;
    int res;

    ifp = fopen("a.txt", "r");
    if(ifp == NULL)
    {
        printf("Can't open file.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");
    if(ofp == NULL)
    {
        printf("Can't open file.\n");
        return 1;
    }

    while(1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat);
        if(res == EOF)
        {
            break;
        }
        tot = kor + eng + mat;
        avg = tot / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}