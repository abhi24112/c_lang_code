#include <stdio.h>
int main ()
{
    int a,i;
    printf("enter the number");
    scanf("%d",&a);
    for (i=1; i<=10; i++)
    {
        printf("%dx%d=%d\n",a,i,a*i);
    }
    return 0;
}