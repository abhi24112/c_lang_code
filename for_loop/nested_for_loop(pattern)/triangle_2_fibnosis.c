#include <stdio.h>
int main()
{
    int i,j,k,n,n1=0,n2=1,sum=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if((i==1)&&(j==1))
            {
                printf("0");
                continue;
            }
            printf("%d ",sum);
            sum=n1+n2;
            n1=n2;
            n2=sum;
        }
        printf("\n");
    }
return 0;
}