#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int i,tmp,s,n,r;
printf("Enter the value of n : ");
scanf("%d", &n);
s = 0;
tmp = 1;
printf("0\t1\t");
for (i=0;i<n-2;i++)
{
    r = s + tmp;
    s = tmp;
    tmp = r;
    printf("%d\t",r);
}
}
