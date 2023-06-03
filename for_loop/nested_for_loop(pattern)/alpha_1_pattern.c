/* print thr pattern 
A
BB
CCC
DDDD
EEEEE...*/

#include <stdio.h>
int main()
{
    int i,j,num,ch='A';
    printf("enter the number of row: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}