#include <stdio.h>
int main ()
{
    char a[20],b[20];
    printf("enter the array a: ");
    gets(a);
    printf("enter the array b: ");
    gets(b);
    strcat(a,b);
    puts("concatenated string is: ");
    puts(a);
return 0;
}