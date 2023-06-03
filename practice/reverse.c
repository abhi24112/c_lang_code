#include <stdio.h>
int main()
{
    int n,a[20],b[20],i;
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[n-i-1]=a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}