#include <stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        flag=1;
    }
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("it is a prime number ");
    }
    else
    {
        printf("it is not a prime number ");
    }
return 0;
}