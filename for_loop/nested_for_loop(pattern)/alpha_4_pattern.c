/* print thE pattern 
C
EE
GGG
IIII...*/

#include <stdio.h>
int main()
{
    int i,j,num,ch='C';
    printf("enter the number of row: ");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        ch=ch+2;
    }
    return 0;
}