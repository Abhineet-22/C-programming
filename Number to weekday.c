#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int n;
printf("Enter a number between 1-7 : ");
scanf("%d",&n);
switch(n)
{
    case(1):
    {
        printf("Sunday");
        break;
    }
    case(2):
    {
        printf("Monday");
        break;
    }
    case(3):
    {
        printf("Tuesday");
        break;
    }
    case(4):
    {
        printf("Wednesday");
        break;
    }
    case(5):
    {
        printf("Thursday");
        break;
    }
    case(6):
    {
        printf("Friday");
        break;
    }
    case(7):
    {
        printf("Saturday");
        break;
    }
}
}
