#include <stdio.h>
int main()
{
    char a;
    printf("enter the charater: ");
    scanf("%c",&a);
    if (a>='a'&& a<='z'||a>='A' && a<='Z')
    {
        printf("it is a alphabet");
    }
    else 
    {
    printf("it is not a alphabet");
    }
    return 0;
}