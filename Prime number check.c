#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int n,i,ctr;
ctr=0;
printf("Enter the number : ");
scanf("%d",&n);
for (i=2; i<n; i++)
{
    if (n%i!=0)
        ctr+=1;

}
if (ctr+2==n)
{
    printf("The number is prime.");
}
else
{
    printf("The number is not prime.");
}
}
