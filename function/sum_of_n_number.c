#include <stdio.h>
int sum(int a);
int main()
{
    int k,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=sum(n);
    printf("Sum=%d",k);
return 0;
}
int sum(int x)
{
    int s=0,i;
    for(i=0; i<=x; i++)
    {
        s+=i;
    }
    return s;
}