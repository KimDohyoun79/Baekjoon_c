
#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for (int s1 = 0; s1 < i; s1++)
            printf("*");
        for (int mid = 0; mid < n*2 - i*2; mid++)
            printf(" ");
        for (int s2 = 0; s2 < i; s2++)
            printf("*");
        printf("\n");
    }
    for(int i = 1; i <= n; i++)
    {
        for (int s1 = 0; s1 < n-i; s1++)
            printf("*");
        for (int mid = 0;mid < i*2; mid++)
            printf(" ");
        for (int s2 = 0; s2 < n-i; s2++)
            printf("*");
        printf("\n");
    }



    return 0;
}
