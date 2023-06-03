#include <stdio.h>
int main()
{
    char a;
    printf("enter the character:\n");
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("%c is a vowel",a);
    }
    else 
    {
        printf("it is a consonent");
    }

}