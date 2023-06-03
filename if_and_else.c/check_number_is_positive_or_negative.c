#include <stdio.h>
int main()
{
    int a ;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is a positive number",a);
    }
    else if (a<0)
    {
        printf("%d is a negative number",a);
    }
    else if (a==0)
    {
        printf("it is a zero");
    }
    else 
    {
        printf("please enter only the number");
    }
}