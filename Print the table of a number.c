#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int i,n,r;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("\n");
for (i=1;i<=9; i++)
{
    r = n*i;
    printf("  %d      x       %d      =      %d\n",n,i,r);
}
printf("  %d      x       %d     =      %d\n",n,10,n*10);
}
