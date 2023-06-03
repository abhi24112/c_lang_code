#include <stdio.h>
int main()
{
    int n,sum=0,a[20],i=0;
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("sum of the array is %d ",sum);
return 0;
}