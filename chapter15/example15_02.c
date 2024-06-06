#include <stdio.h>
#include <string.h>
//  인사말 정렬 프로그램
/*  키보드로 인사말을 입력한 후 사전순으로 정렬하여 출력
    이어서 입력한 순서대로 다시 한 번 출력
    정렬은 입력한 문자열을 바꾸지 않고 포인터 배열의 연결 순서를 바꾸어 구현 */
void init_intro(char (*intro)[80], char **pint);// 2차원 배열과 포인터 배열 연결
int input_intro(char (*intro)[80]);             // 인사말 입력
void sort_intro(char **pint, int cnt);          // 인사말 정렬
void print_intro(int mode, void *vp, int cnt);  // 인사말 출력

int main()
{
    char intro[10][80];             // 인사말을 입력할 배열
    char *pint[10];                 // 각 인사말을 연결할 포인터 배열
    int cnt;                        // 입력된 인사말 수

    init_intro(intro, pint);        // intro와 pint연결
    cnt = input_intro(intro);              // 인사말 입력, 입력한 인사말 수 반환
    sort_intro(pint, cnt);          // 인사말 사전순 정렬, 포인터 배열의 연결 순서 바꾸기
    print_intro(1, pint, cnt);      // 1을 사용하면 정렬된 인사말 출력
    print_intro(0, intro, cnt);     // 0을 사용하면 최초 입력된 인사말 출력

    return 0;
}

void init_intro(char (*intro)[80], char **pint) // 2차원 배열과 포인터 배열 연결
{
    int i;

    for(i = 0; i < 10; i++)
    {
        pint[i] = intro[i];
    }
}

int input_intro(char (*intro)[80])              // 인사말 입력
{
    int cnt = 0;
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter sentences : ");
        if (strcmp(gets(intro[i]), "end") == 0) break;
        cnt++;
    }

    return cnt;
}

void sort_intro(char **pint, int cnt)           // 인사말 정렬, 포인터 배열의 연결 순서 바꾸기
{
    char *pt;
    int i, j;

    for(i = 0; i < cnt; i++)
    {
        for(j = i + 1; j < cnt; j++)
        {
            if (strcmp(pint[i], pint[j]) > 0)
            {
                pt = pint[i];
                pint[i] = pint[j];
                pint[j] = pt;
            }
        }
    }
}

void print_intro(int mode, void *vp, int cnt)   // 인사말 출력
{
    int i;

    if (mode == 1)
    {
        printf("Sorted...\n");
        for(i = 0; i < cnt; i++)
        {
            printf("%s\n", ((char **)vp)[i]);
        }
    }
    else if (mode == 0)
    {
        printf("Input order...\n");
        for(i = 0; i < cnt; i++)
        {
            printf("%s\n", ((char (*)[80])vp)[i]);
        }
    }
}