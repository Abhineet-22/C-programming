#include<stdio.h>
main()
{
int s,i,d,r,ctr;
int n;
printf("Enter your number (upto 9 digits only): ");
scanf("%d",&n);
i = n/10;
s = 0;
ctr = 1;
while (i!=0)
    {
        i = i/10;
        ctr+=1;
    }
printf("Given number contains %d digits\n", ctr);
d = n*10;
for (i=1; i<ctr+1;i++)
{
    d = d/10;
    r = d%10;
    printf("%d",r);
}
printf("\n This is your reversed number.");
}
