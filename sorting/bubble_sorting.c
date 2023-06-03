#include <stdio.h>
int main()
{
    int i,j,n,a[50],temp;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    printf("enter the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted array is :\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}