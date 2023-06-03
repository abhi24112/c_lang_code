#include<stdio.h>
int main()
{
    int n,i,a[20],b[20];
    printf("Enter the no. of element :");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    printf("The copy list is:\n");
    for (i=0; i<n; i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}