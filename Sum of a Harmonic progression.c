#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int i,n;
float c,s;
printf("Enter the value of n : ");
scanf("%d",&n);
s=0.0;
for (i=1;i<=n; i++)
{
    c = 1.0/((float) i);
    s+=c;
}
printf("The sum of the series 1/1 + 1/2 + 1/3 + 1/4...+ 1/%d  is :  %f\n",n,s);
}
