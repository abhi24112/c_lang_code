#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b,k; 
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    k=sum(a,b);
    printf("Sum of the nubers is %d",k);
return 0;
}
int sum(int x,int y)
    {
        return x+y;
    }