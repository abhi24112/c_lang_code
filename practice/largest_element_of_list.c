#include <stdio.h>
int main()
{
    int lar,n,a[20],i;
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    lar=a[0];
    for (i=0; i<n; i++)
    {
        if (lar<a[i])
        {
            lar=a[i];
        }
    }
    printf("minimum value is %d",lar);
return 0;
}