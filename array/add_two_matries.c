#include <stdio.h>
int main()
{
    int m,n,c,d,a[10][10],b[10][10],sum[10][10];
    printf("enter the number of row and column: ");
    scanf("%d %d",&m,&n);
    printf("enter the element of first matrix");
    printf("\n");
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            printf("enter the element: ");
            scanf("%d",&a[c][d]);
        }
    }
    printf("enter the element of second matrix");
    printf("\n");
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            printf("enter the element: ");
            scanf("%d",&b[c][d]);
        }
    }
    printf("sum of matrix:\n ");
    
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            sum[c][d]=a[c][d]+b[c][d];
            printf(" %d ",sum[c][d]);
        }

        printf("\n");
    }
return 0;
}