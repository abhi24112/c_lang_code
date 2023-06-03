#include <stdio.h>
int main()
{
    int n,num,sum=0,count=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(num==sum){
    printf("Number is a armstrong");
    }
    else{
        printf("NUmber is not a armstrong");
    }
    return 0;
}