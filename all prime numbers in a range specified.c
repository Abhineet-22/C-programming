#include<stdio.h>
main()
{
int i,j,inp,ctr;
printf("Enter a number : ");
scanf("%d",&inp);
for (i=2;i<=inp; i++)
{
    ctr=0;
    for(j=1; j<i; j++)
    {
        if(i%j==0)
        {
            continue;
        }
        else
        {
            ctr = ctr+1;
        }

    if (ctr==i-2)
    {
     printf("%d\n",i);
    }
    }
}
}
