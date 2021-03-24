
#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    for(n; 0 < n; n--)
    {
        for(int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}