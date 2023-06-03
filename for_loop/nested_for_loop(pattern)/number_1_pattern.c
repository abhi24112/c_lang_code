/* print the pattern 
1
22
333
4444
55555....so on*/

#include <stdio.h>
int main()
{
    int i,j,num;
    printf("enter the number of row: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}