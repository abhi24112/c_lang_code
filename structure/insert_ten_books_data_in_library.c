#include <stdio.h>
struct lib
{
    char title_of_book[20];
    int page_no;
    float price;
}b[60];
int main()
{
    int i,n;
    printf("****You can only put 60 book data at a time**** \n");
    printf("enter the number of books: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("enter the title of %d book: ",i);
        scanf("%s",&b[i].title_of_book[20]);
        printf("enter the page number of books: ");
        scanf("%d",&b[i].page_no);
        printf("enter the price of the book: ");
        scanf("%f",&b[i].price);
    }
return 0;
}