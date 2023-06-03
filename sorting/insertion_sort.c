#include <stdio.h>
void insertion_sort(int* a,int n)
{
    int temp,i,j;
    for ( i=1; i<=n-1; i++)
    {
        temp = a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

void printarr(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}

int main()
{
    int a[20]={5,4,6,3,25,7};
    int n=6;
    insertion_sort(a,n);
    printarr(a,n);
    return 0;
}