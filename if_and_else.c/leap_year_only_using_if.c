#include <stdio.h>
int main()
{
    int a;
    printf("enter the year: ");
    scanf("%d",&a );
    if (((a%4==0)&&(a%100)!=0)||(a%400==0)){
        printf("%d is a leap year",a);
    }
    else 
    printf("this is not a leap year");
}