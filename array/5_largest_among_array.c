#include <stdio.h>
int main()
{
    int max,n,a[20],i=0;
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=0; i<n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("maximum value is %d ",max);
return 0;
}