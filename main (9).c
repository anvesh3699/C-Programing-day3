#include<stdio.h>
main()
{
    int n;
    n=1;
    test:
    {
        printf("\n%d",n);
        n++;
    }
    if(n<=20)
    goto test;
}