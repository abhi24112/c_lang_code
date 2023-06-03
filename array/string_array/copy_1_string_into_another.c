#include <stdio.h>
int main()
{
    char a[20];
    char b[20];
    printf("enter the array a: ");
    gets(a);
    strcpy(b,a);
    printf("array a is copy in array b: ");
    printf("%s",b);
return 0;
}