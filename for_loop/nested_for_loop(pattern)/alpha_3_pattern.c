/* print thE pattern 
A
BC
DEF
GHIJ
KLMNO...*/

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
            ch++;
        }
        printf("\n");
    }
    return 0;
}