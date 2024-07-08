#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int i,n,c,s;
printf("Enter the value of n : ");
scanf("%d",&n);
s=0;
for (i=0;i<=n; i++)
{
    c = i*i;
    s+=c;
}
printf("The sum of the series 1^2 + 2^2 + 3^2...+ %d^2  is :  %d\n",n,s);
}
