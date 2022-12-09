/*Program to print even numbers in a given range*/
#include <stdio.h>
int main()
{
int i,start,end;
printf("Enter lower limit: ");
scanf("%d", &start);
printf("Enter higher limit: ");
scanf("%d", &end);
    if(start==0)
    {
        start++;
    }
    for(i=start;i<end;i++)
        if(i%2==0)
        {
            printf("%d\t", i);
        }
return 0;
}