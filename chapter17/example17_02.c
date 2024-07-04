#include <stdio.h>
// 도전 실전 예제 3번
struct score
{
    int kor;
    int eng;
    int mat;
    double avg;
};

struct student
{
    int number;
    char name[20];
    struct score Score;
};


void input_data(struct student *ps);
void print_data(struct student *ps, char *pa);
void sort_data(struct student *ps);
void set_grade(struct student *ps, char *pa);

int main()
{
    struct student list[5];
    char grade[5];

    input_data(list);
    set_grade(list, grade);
    printf("Before sort...\n");
    print_data(list, grade);
    sort_data(list);
    set_grade(list, grade);
    printf("After sort...\n");
    print_data(list, grade);

    return 0;
}

void input_data(struct student *ps)
{
    int i;
    int sum;
    double temp;

    for(i = 0; i < 5; i++)
    {
        printf("Student number : ");
        scanf("%d", &((ps + i) -> number));
        printf("Name : ");
        scanf("%s", (ps + i) -> name);
        printf("Score of Kor, Eng, Mat : ");
        scanf("%d%d%d", &ps[i].Score.kor, &ps[i].Score.eng, &ps[i].Score.mat);
        sum = ps[i].Score.kor + ps[i].Score.eng + ps[i].Score.mat;
        ps[i].Score.avg = sum / 3.0;
    }

    for(i = 0; i < 5; i++)
    {

    }
}

void print_data(struct student *ps, char *pa)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d %s%5d%5d%5d   %.1lf    %c\n",
        ps[i].number, ps[i].name, ps[i].Score.kor, ps[i].Score.eng, ps[i].Score.mat,
        ps[i].Score.avg, pa[i]);
    }
}

void sort_data(struct student *ps)
{
    int i, j;
    struct student temp;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            if (ps[i].Score.avg > ps[j].Score.avg)
            {
                temp = ps[i];
                ps[i] = ps[j];
                ps[j] = temp;
            }
        }
    }
}

void set_grade(struct student *ps, char *pa)
{
    int i;
    double temp;
    
    for(i = 0; i < 5; i++)
    {
        temp = ps[i].Score.avg;

        if (temp >= 90.0) pa[i] = 'A';
        else if (temp >= 80.0) pa[i] = 'B';
        else if (temp >= 70.0) pa[i] = 'C';
        else pa[i] = 'F';
    }
}