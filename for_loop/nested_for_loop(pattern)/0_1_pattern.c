/*print the pattern 
1
00
111
0000
11111...*/

#include <stdio.h>
int main ()
{
    int i,j,n;
    printf("enter the number of row: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if (i%2==0)
            {
                printf("0");
            }
            else 
            printf("1");
        }
        printf("\n");
    }
    return 0;
}