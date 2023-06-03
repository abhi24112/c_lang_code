#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("enter the number: ");
    scanf("%d",&b);
    printf("enter the number: ");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is a greater number",a);   
        }
        else 
        {
            if ((b>a)&&(b>c))
            {
                printf("%d is a greater nuber",b);
            }

        }
    }
    else 
    {
        printf("%d is a graeter number",c);
    }
return 0;
}