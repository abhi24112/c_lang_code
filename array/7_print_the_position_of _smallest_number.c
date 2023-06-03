#include <stdio.h>
int main()
{
    int i=0,n,min,position,a[20];
    printf("enter the number of element in array: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (i=0; i<n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
            position=i;
        }
    }
    printf("mininum=%d",min);
    printf("\n");
    printf("position of the smallest number is %d",position);
return 0;
}