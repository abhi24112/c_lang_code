#include <stdio.h>
int main()
{
    int a[20],i,n,s;
    printf("enter the no of element in array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    printf("enter the number which you want to search: ");
    scanf("%d",&s);
    for (i=0; i<n; i++)
    {
        if(a[i]==s)
        {
            break;
        }
    }
    if(i<n)
    {
        printf("number found at index %d",i);
    }
    else 
    {
        printf("number is not found");
    }
return 0;
}