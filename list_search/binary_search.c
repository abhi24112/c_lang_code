#include <stdio.h>
int main()
{
    int a[20],i,s,low,high,mid,n;
    printf("enter the number of element:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the element of array in ascending order : ");
        scanf("%d",&a[i]);
    }
    printf("enter the element for search: ");
    scanf("%d",&s);
    low=0;
    high=20;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(s==a[mid])
        {
            break;
        }
        else
        {
            if(s>a[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    if (s==a[mid])
    {
        printf("the searched element found at location %d",mid+1);
    }
    else 
    printf("the search element is not found");
return 0;
}