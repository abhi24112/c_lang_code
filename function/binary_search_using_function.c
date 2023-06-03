#include <stdio.h>
int search(int a[],int start,int end,int found)
{
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==found)
        {
            return mid;
        }
        else if(a[mid]<found)
        {
            start= mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[20],n,found,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the element of the array: ");
        scanf("%d",&a[i]);
    }
    printf("enter the which you  want to find:");
    scanf("%d",&found);
    int call=search(a,0,n-1,found);
    if(call==-1)
    {
        printf("element is not in the array");        
    }
    else 
    {
        printf("entered element is found at index %d",call);
    }
return 0;

}