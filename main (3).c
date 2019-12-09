/* ; 1 to 20 nos,& 20 to 1 nos with one for loop */
#include<stdio.h>
main()
{
    int i,n;
    printf("\n enter a number :");
    scanf("%d",&n);
    printf("\n factor of %d are ",n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        printf("\n%d",i);
    }
}