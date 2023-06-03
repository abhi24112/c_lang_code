#include <stdio.h>
int main()
{
    int i=0,n,a[10];
    printf("enter the number of element in array");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("enter the elements :");
        scanf("%d",&a[i]);
    }
    printf("The given list is:\n");
    for (i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
