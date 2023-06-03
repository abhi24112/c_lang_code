/* print the pattern
1
23
456
78910...so on*/

#include <stdio.h>
int main ()
{
    int i,j,a,num=1;
    printf("enter the number of row ");
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",num);
            printf(" ");
            num++;
        }
        printf("\n");
    }
return 0;
}