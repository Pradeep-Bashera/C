/*Program to find largest number from three given numbers*/
#include <stdio.h>
int main()
{
int a,b,c,large;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("Enter third number: ");
scanf("%d", &c);
if(a>b)
{
    if(a>c)
        large=a;
    else
        large=c;
}
else
{
    if(b>c)
        large=b;
    else
        large=c;
}
printf("\n%d is the largest number", large);
return 0;
}