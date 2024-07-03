#include <stdio.h>
// 함수에서 -> 연산자를 사용하여 구조체 배열의 값 출력
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main()
{
    struct address list[5] = {
        {"a", 23, "111-1111", "a-address"},
        {"b", 35, "222-2222", "b-address"},
        {"c", 19, "333-3333", "c-address"},
        {"d", 15, "444-4444", "d-address"},
        {"e", 45, "555-5555", "e-address"}
    };
    
    print_list(list);

    return 0;
}

void print_list(struct address *lp)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n",
        (lp + i) -> name, lp[i].age, (*(lp + i)).tel, (*(lp + i)).addr);
    }
}