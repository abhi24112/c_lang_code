/* 
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * *
*/

#include <stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the number: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (k=n; k>=i; k--)
        {
            printf(" ");
            printf(" ");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}