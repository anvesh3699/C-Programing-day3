/* check weather given number is prime number or not */
#include<stdio.h>
main()
{
    int i,n,count=0;
    printf("\n enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if (count==1)
    printf("prime number");
    else
    printf("not a prime number");
}