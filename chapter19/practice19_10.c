#include <stdio.h>
#include "pra19_10_line.h"
#include "pra19_10_point.h"

int main()
{
    Line a = {{1, 2}, {5, 6}};
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("Coordinates of the center point of the line : (%d, %d)\n", b.x, b.y);

    return 0;
}