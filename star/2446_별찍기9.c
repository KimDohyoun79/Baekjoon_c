
#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        for (int sp = 0; sp < i; sp++)
            printf(" ");
        for (int st = 0; st < (n-i)*2-1; st++)
            printf("*");
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int sp = 0; sp < n - i - 1; sp++)
            printf(" ");
        for (int st = 0; st < (i+1)*2-1; st++)
            printf("*");
        printf("\n");
    }

    return 0;
}
