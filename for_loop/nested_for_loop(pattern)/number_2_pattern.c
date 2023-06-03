/* print the pattern 
1
12
123
1234
12345....so on*/

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
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}