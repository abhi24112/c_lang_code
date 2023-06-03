#include <stdio.h>
int main()
{
    int n,i=0,a[20],b[20];
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        b[i]=a[i];
        printf(" ");
        printf("%d",b[i]);
    }
return 0;
}