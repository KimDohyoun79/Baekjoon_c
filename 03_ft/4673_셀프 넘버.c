
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

    int a[10001] = {0,};
    int re = 0;
    for (int i =1; i <= 10000; i++)
    {
        if(i > 9)
        {
            re = check(i);
            if(re <= 10000)
                a[re] = 1;
        }
        else
        {
            re = i + i;
            a[re] = 1;
        }
    }
    
    for (int i = 1; i <=10000; i++)
    {
        if (a[i] != 1)
            printf("%d\n", i);
    }

    return 0;
}