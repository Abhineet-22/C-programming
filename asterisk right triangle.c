#include<stdio.h>
main()
{
int i,j,n;
printf("Enter a number : ");
scanf("%d",&n);
for (i=1;i<=n; i++)
{
    if (i>=2)
    {
        printf("\n");
    }
    for(j=1; j<=i; j++)
    {
        printf("* ");
    }
}
}
