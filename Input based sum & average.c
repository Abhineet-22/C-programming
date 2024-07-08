#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
int s,ctr,n;
char r;
float avg;
r = 'y';
s=0;
ctr=0;
while (r!='n')
{
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Want to enter again (y/n) ? : ");
    r = getch();
    printf("%c\n",r);
    s+=n;
    ctr+=1;
}
avg = ((float)s)/ctr;
printf("The sum of the numbers you entered is : %d\n",s);
printf("The average of the numbers you entered is : %f\n",avg);
}
