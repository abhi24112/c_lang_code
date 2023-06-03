/*
     *
    **
   ***
  ****
 *****

 */

#include <stdio.h>
int main ()
{
    int i,k,j,a=1,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf(" ");
        }
        for (k=1; k<=a; k++)
        {
            printf("*");
        }
        printf("\n");
        a++;
    }
    return 0;
}