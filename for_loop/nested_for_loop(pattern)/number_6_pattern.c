/* print the pattern 
1
01
010
1010
10101....so on*/

#include <stdio.h>
int main()
{
    int i,j,n,num=1;
    printf("enter the number row : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",num);
            if (num==1)
            {
                num=0;
            }
            else 
            num=1;
        }
        printf("\n");
    }
    return 0;
}    