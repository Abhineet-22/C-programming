#include<stdio.h>
main()
{
int i,j;
char n;
for (i=65;i<=69;i++)
{
    if (i>=66)
    {
        printf("\n");
    }
    for(j=69; j>=i; j--)
    {
        printf("%c ",i);
    }
}
}

