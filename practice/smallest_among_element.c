#include<stdio.h>
int main()
{
    int n,i,a[20],min;
    printf("Enter the no element:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element of the list:");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("The smallest element is :%d",min);
    return 0;
}