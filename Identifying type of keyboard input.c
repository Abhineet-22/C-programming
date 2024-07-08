#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
char a;
printf("Enter a character : ");
a = getch();
printf("%c\n",a);
if (isalpha(a))
{
    if (islower(a))
    {
        printf("You entered a small letter.");
    }
    else if (isupper(a))
    {
        printf("You entered a capital letter.");
    }
}
else if (isdigit(a))
{
    printf("You entered a digit.");
}
else
{
    printf("You entered a special character.");
}
}
