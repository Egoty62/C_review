#include <stdio.h>
#include <string.h>
// 18.2 연습문제 4번
int main()
{
    char name[20];
    int num, age;
    double height;
    char address[80];
    FILE *fp;

    fp = fopen("C:\\C (git)\\chapter18\\ex1801.txt", "w");

    if(fp == NULL) return 1;

    while(1)
    {
        printf("Student Number : ");
        scanf("%d", &num);
        if(num < 0) break;

        fflush(stdin);
        printf("Name : ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
        printf("Age : ");
        scanf("%d", &age);
        printf("Height : ");
        scanf("%lf", &height);

        fflush(stdin);
        printf("Address : ");
        fgets(address, sizeof(address), stdin);

        fprintf(fp, "%d\n%s %d %.1lf\n%s", num, name, age, height, address);
    }

    fclose(fp);

    return 0;
}