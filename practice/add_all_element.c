#include<stdio.h>
int main()
{
    int n,a[20],i,sum=0;
    printf("Enter the number of element of list:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element of list:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("The Sum of the list is:%d",sum);
    return 0;   
}