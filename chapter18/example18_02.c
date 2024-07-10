#include <stdio.h>
#include <string.h>
// 18.2 연습문제 5번
int main()
{
    FILE *ifp, *ofp;
    char name[20];
    double bmi, weight, height;

    ifp = fopen("C:\\C (git)\\chapter18\\ex1802-01.txt", "r");
    if(ifp == NULL) return 1;

    fgets(name, sizeof(name), ifp);
    name[strlen(name) - 1] = '\0';
    fscanf(ifp, "%lf", &weight);
    fgetc(ifp);
    fscanf(ifp, "%lf", &height);

    bmi = (weight / ((height / 100) * (height / 100)));

    ofp = fopen("C:\\C (git)\\chapter18\\ex1802-02.txt", "w");
    if(ofp == NULL) return 1;

    fprintf(ofp, "Name : %s, BMI : %.1lf\nWeight : %.1lf, Height : %.1lf",
            name, bmi, weight, height);

    fclose(ifp);
    fclose(ofp);

    return 0;
}