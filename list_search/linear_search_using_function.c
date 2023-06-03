#include <stdio.h>
int search(int arr[],int n,int s)
{
    int i; 
    for (i=0; i<n; i++)
    {
        if(arr[i]==s)
        {
            return i; 
        }
    }
    return -1;
}
int main()
{
    int arr[20],n,s,j;
    printf("enter the number element ");
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        printf("enter the element of array: ");
        scanf("%d",&arr[j]);
    }
    printf("enter the element for search: ");
    scanf("%d",&s);
    int call=search(arr,n,s);
    if(call==-1)
    {
        printf("element is not present in the array");
    }
    else 
    {
        printf("element found in index %d: ",call);
    }
return 0;
}