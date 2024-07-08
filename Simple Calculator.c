#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int a,b,c,n;
printf("1. ADDITION \n2. SUBTRACTION \n3. MULTIPLICATION \n4. DIVISION \n");
printf("Enter a number between 1-4 : ");
scanf("%d",&n);
switch(n)
{
    case(1):
    {
        printf("Enter 1st value : ");
        scanf("%d",&a);
        printf("Enter 2nd value : ");
        scanf("%d",&a);
        printf("Performing addition operation...\n");
        c = a + b;
        printf("Your operation returned %d",c);
        break;
    }
    case(2):
    {
        printf("Enter 1st value : ");
        scanf("%d",&a);
        printf("Enter 2nd value : ");
        scanf("%d",&b);
        printf("Performing subtraction operation...\n");
        c = a-b;
        printf("Your operation returned %d",c);
        break;
    }
    case(3):
    {
        printf("Enter 1st value : ");
        scanf("%d",&a);
        printf("Enter 2nd value : ");
        scanf("%d",&b);
        printf("Performing multiplication operation...\n");
        c = a*b;
        printf("Your operation returned %d",c);
        break;
    }
    case(4):
    {
        printf("Enter 1st value : ");
        scanf("%d",&a);
        printf("Enter 2nd value : ");
        scanf("%d",&b);
        printf("Performing division operation....\n");
        c = a/b;
        printf("Your operation returned %d",c);
        break;
    }
}
}
