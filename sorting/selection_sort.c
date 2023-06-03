#include <stdio.h>
int main ( )
{
   int a[20],n;
   printf("Enter the number of element:");
   scanf("%d",&n);
   for(int i=0; i<n; i++)
   {
       printf("Enter the element:");
       scanf("%d",&a[i]);
   }
   for (int i = 0; i < n - 1; i++)
   {
        int min_pos = i;
        for (int j=i + 1; j < n; j++){
            if (a[j] < a[min_pos]) 
            {
                min_pos = j;
            }
        }
        if(min_pos!= i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
   }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    } 
return 0;
}