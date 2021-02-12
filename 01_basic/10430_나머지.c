#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x,y;
    x=((a%c) + (b%c))%c;
    y=((a%c) * (b%c))%c;
    printf("%d \n", (a+b)%c);
    printf("%d \n", x);
    printf("%d \n", (a*b)%c);
    printf("%d \n", y);
    return 0;
}