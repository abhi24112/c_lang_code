/* print the pattern 
1
22
333
4444
55555....so on*/

#include <stdio.h>
int main()
{
    int i,j,n,a=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
        {
            for (j=1; j<=i; j++)
            {
                printf("%d",a);
                a++;
            }
            printf("\n");
        }
    return 0;
}