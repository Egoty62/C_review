#include <stdio.h>
// 버퍼를 공유함으로 인해 발생하는 문제
// 논리적 오류를 일으키는 코드!!
int main()
{
    FILE *fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");
    
    fscanf(fp, "%d", &age);
    fgets(name, sizeof(name), fp);

    printf("Age : %d, Name : %s", age, name);
    fclose(fp);

    return 0;
}