#include <stdio.h>
int main()
{
    int min,n,a[20],i;
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (i=0; i<n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum value is %d",min);
return 0;
}