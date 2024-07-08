#include<stdio.h>
main()
{
int i,j;
char n;
/*printf("Enter a character from A-V : ");
scanf("%c",&n);*/
for (i=69;i>=65;i--)
{
    if (i<=68)
    {
        printf("\n");
    }
    for(j=65; j<=i; j++)
    {
        printf("%c ",j);
    }
}
}
