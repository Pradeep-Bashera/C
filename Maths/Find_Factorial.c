/*Program to find factorial of a given number*/
#include <stdio.h>
int main()
{
int i,number;
float factorial=1;
printf("Enter the number: ");
scanf("%d", &number);
    for(i=1;i<=number;i++)
    {
    factorial = factorial*i;
    }
    printf("Factorial of %d = %.f", number, factorial);
return 0;
}