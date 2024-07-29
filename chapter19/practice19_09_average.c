extern int cnt;             // main.c의 전역 변수 cnt 공유
extern int tot;             // input.c의 전역 변수 tot 공유

double average()
{
    return tot / (double)cnt;
}