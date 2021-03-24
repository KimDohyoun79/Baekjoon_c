
#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
            printf(" ");
        for(int s = 0; s < ((n-i)*2-1);s++)
            printf("*");
        printf("\n");
    }
    return 0;
}