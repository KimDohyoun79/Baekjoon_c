#include <stdio.h>

int main()
{
    int x, y;
    double result=0;

    scanf("%d", &x);
    scanf("%d", &y);
    result=(double)x/y;

    printf("%0.9lf", result);

    return 0;
}