#include<stdio.h>
int main()
{
	int n,a[50],i;
	printf("Enter the number of element in the list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element of the list:");
		scanf("%d",&a[i]);
	}
	printf("The given list is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}