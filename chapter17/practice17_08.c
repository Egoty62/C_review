#include <stdio.h>
// 구조체 배열을 초기화하고 출력
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main()
{
    struct address list[5] = {
        {"a", 23, "111-1111", "a-address"},
        {"b", 35, "222-2222", "b-address"},
        {"c", 19, "333-3333", "c-address"},
        {"d", 15, "444-4444", "d-address"},
        {"e", 45, "555-5555", "e-address"}
    };
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n",
        list[i].name, list[i].age, list[i].tel, list[i].addr);
    }

    return 0;
}