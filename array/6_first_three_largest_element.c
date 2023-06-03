#include<stdio.h>
int main()
{
    int n,i,a[20],max,mid,min;
    printf("Enter the no of element of the list:");
    scanf("%d",&n);
    if(n>=3)
    {
        for(i=0; i<n; i++)
        {
            printf("Enter the element:");
            scanf("%d",&a[i]);
        }
        min=mid=max=a[0];
        for(i=0; i<n; i++)
        {
            if(max<a[i])
            {
                min=mid;
                mid=max;
                max=a[i];
            }
            else if(mid<a[i])
            {
                min=mid;
                mid=a[i];
            }
            else
            {
                if(min<a[i])
                {
                    min=a[i];
                }
            }
        }
        printf("first large no:%d \n second large no:%d \n third large no:%d",max,mid,min);
    }
    return 0; 
}