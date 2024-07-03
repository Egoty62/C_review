#include <stdio.h>
// 구조체, 공용체, 열거형을 사용한 경품 당첨자 목록 관리 프로그램
typedef union
{
    int ea;
    double kg;
    double liter;
} Unit;

typedef struct
{
    char name[20];                          // 당첨자 이름
    enum {EGG = 1, MILK, MEAT} Kind;        // 상품 종류, 열거형 멤버
    Unit amount;                            // 지급양, 공용체 멤버
} Gift;                                     // 구조체 재정의

void print_list(Gift a);

int main()
{
    Gift list[5];                           // 5명 경품 지급 명단
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the name : ");
        scanf("%s", list[i].name);
        printf("Choose the food(1. egg, 2. milk, 3. meat) : ");
        scanf("%d", &list[i].Kind);

        switch (list[i].Kind)
        {
            case EGG : list[i].amount.ea = 30; break;
            case MILK : list[i].amount.liter = 4.5; break;
            case MEAT : list[i].amount.kg = 0.6; break;
        }
    }

    printf("# The third winner of the prize\n");
    print_list(list[2]);

    return 0;
}

void print_list(Gift a)
{
    printf(" name : %s, food : ", a.name);

    switch (a.Kind)
    {
        case EGG : printf("%d eggs\n", a.amount.ea); break;
        case MILK : printf("%.1lf liter of milk\n", a.amount.liter); break;
        case MEAT : printf("%.1lf kg of meat\n", a.amount.kg); break;
    }
}