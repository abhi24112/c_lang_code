#include <stdio.h>
int main()
{
    int a;
    printf("enter the year");
    scanf("%d",&a);
    if (a%4==0)
    {
        if (a%100!=0)
        {
            printf("%d is a leap year",a);
        }
        else 
        {
            if (a%400==0)
            {
            printf("%d is a leap year",a);
            }
        }
    }             
    else
    {
        printf("%d is not a leap year",a);
    }
return 0;
}