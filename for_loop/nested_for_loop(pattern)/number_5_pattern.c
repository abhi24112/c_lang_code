/* print the pattern 
2
33
444
5555
66666....so on*/
#include <stdio.h>
int main()
{
    int i,j,n,num=2;
    printf("enter the number row : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",num);
        }
        printf("\n");
        num++;
    }
    return 0;
}    