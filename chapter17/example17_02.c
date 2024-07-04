#include <stdio.h>
// 도전 실전 예제 3번
struct student
{
    int number;
    char name[20];
    struct score Score;
};

struct score
{
    int kor;
    int eng;
    int mat;
    double avg;
    char grade;
};

void input_data(struct student *ps);
void print_data(struct student *ps);
void sort_data(struct student *ps);

int main()
{
    struct student list[5];

    input_data(list);
    print_data(list);
    sort_data(list);
    print_data(list);

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
    }

    for(i = 0; i < 5; i++)
    {
        sum = ps[i].Score.kor + ps[i].Score.eng + ps[i].Score.mat;
        ps[i].Score.avg = sum / 3.0;
        temp = ps[i].Score.avg;

        if (temp >= 90.0)
        {
            ps[i].Score.grade = 'A';
        }
        else if (temp >= 80.0)
        {
            ps[i].Score.grade = 'B';
        }
        else if (temp >= 70.0)
        {
            ps[i].Score.grade = 'C';
        }
        else ps[i].Score.grade = 'F';
    }
}

void print_data(struct student *ps)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d %s%5d%5d%5d   %.1lf    %c\n",
        ps[i].number, ps[i].name, ps[i].Score.kor, ps[i].Score.eng, ps[i].Score.mat,
        ps[i].Score.avg, ps[i].Score.grade);
    }
}

void sort_data(struct student *ps)
{
    
}