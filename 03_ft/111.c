
#include <stdio.h>

int    check(int i){

    int re = i;

    while (i > 9)
    {
        re +=i%10;
        i /=10;
    }
    re += i;
    
    return (re);
}

int main(){


    int a = check(100);
    printf("%d", a);
    return 0;
}