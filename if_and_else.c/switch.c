#include <stdio.h>
int main()
{
    int n,c,i;
    printf("***choice 1 for addition 2 for subtraction***\n");
    printf("Enter the choice :");
    scanf("%d",&c);
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the number :");
    scanf("%d",&i);
    switch(c)
    {
        case 1: printf("%d",n+i);
        break;
        case 2: printf("%d",n-i);
        break; 
        default: printf("Wrong choice");
    }
return 0;
}
