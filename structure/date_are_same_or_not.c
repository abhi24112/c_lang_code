#include <stdio.h>
#include <string.h>
struct date
{
    int day,month,year;
}b1,b2;
int main()
{
    printf("*****formate is {day,month,year}****\n");
    printf("enter the first date: ");
    scanf("%d %d %d",&b1.day,&b1.month,&b1.year);
    printf("enter the second date: ");
    scanf("%d %d %d",&b2.day,&b2.month,&b2.year);
    if((b1.day)==(b2.day)&&(b1.month)==(b2.month)&&(b1.year)==(b2.year))
    {
        printf("both dates are same");
        printf("\nfirst date is %d-%d-%d",b1.day,b1.month,b1.year);
        printf("\nsecond date is %d-%d-%d",b2.day,b2.month,b2.year);
    }
    else 
    {
        printf("both dates are different ");
        printf("\nfirst date is %d-%d-%d",b1.day,b1.month,b1.year);
        printf("\nsecond date is %d-%d-%d",b2.day,b2.month,b2.year);
    }
return 0;
}