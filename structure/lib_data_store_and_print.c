#include<stdio.h>
struct lib
{
    char title[20];
    int page_no;
    float price;
}b[100];
int main()
{
    int i,j,n;
    printf("Enter the number of books:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the title of %d book:",i);
        scanf("%s",&b[i].title);
        printf("Enter the page_no of %d book:",i);
        scanf("%d",&b[i].page_no);
        printf("Enter the price of %d book:",i);
        scanf("%f",&b[i].price);
    }
    printf("Display imformation\n\n");
    for(i=1;i<=n;i++)
    {
        printf("Title: %s\n",b[i].title);
        printf("Page no: %d\n",b[i].page_no);
        printf("Price: %.2f\n",b[i].price);
        printf("\n");
    }
    return 0;
}
