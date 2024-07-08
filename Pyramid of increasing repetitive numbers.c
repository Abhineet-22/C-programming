#include<stdio.h>
main()
{
int i,j,n,a,b;
printf("Enter a number : ");
scanf("%d",&n);
for (i=1;i<=n; i++)
{
    if (i>=2)
    {
        printf("\n");
    }
    for(j=n; j>=i; j--)
    {
        printf(" ");
    }
    for (a=1;a<=i; a++)
    {
        printf("%d ",i);
    }
}
}
