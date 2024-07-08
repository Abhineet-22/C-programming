#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
main()
{
int i,s,n,ctr,inp;
ctr=0;
s=0;
printf("Enter your number : ");
scanf("%d",&n);
printf("Enter the number for divisibility check : ");
scanf("%d",&inp);
for (i=1; i<=n; i++)
{
    if (i%inp==0)
    {
        ctr+=1;
        s+=i;
    }
}
printf("No. of divisible numbers by %d are : %d \n",inp,ctr);
printf("Sum of all the above numbers is : %d \n", s);
}
