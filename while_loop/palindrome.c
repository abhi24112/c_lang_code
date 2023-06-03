#include <stdio.h>
int main()
{
    int n,rem,rev=0,num;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==num)
    {
        printf("enterd number is a palindrome");
    }
    else 
    printf("enterd number is not a palindrome");
    return 0;
}