#include<stdio.h>
main()
{
int i,j,n;
printf("Enter a number : ");
scanf("%d",&n);
for (i=n;i>=1; i--)
{
    if (i<=n-1)
    {
        printf("\n");
    }
    for(j=1; j<=i; j++)
    {
        printf("* ");
    }
}
}
