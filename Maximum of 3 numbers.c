#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int a,b,c;
printf("Enter 1st number : ");
scanf("%d",&a);
printf("Enter 2nd number : ");
scanf("%d",&b);
printf("Enter 3rd number : ");
scanf("%d",&c);
if (a>b)
{
    if (a>c)
    {
        printf("%d is maximum",a);
    }
}
if (b>a)
{
    if (b>c)
    {
        printf("%d is maximum",b);
    }
    else
    {
        printf("Max is %d",c);
    }
}
}
