/*Program to check if the given number is even or odd*/
#include <stdio.h>
int main()
{
int number;
printf("Enter the number: ");
scanf("%d", &number);
    if(number%2==0)
    {
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
return 0;
}