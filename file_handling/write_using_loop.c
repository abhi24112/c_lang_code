#include <stdio.h>
int main()
{
    int n,i;
    printf("How much number you want to enter: ");
    scanf("%d",&n);
    FILE * p;
    p=fopen("/home/abhi/projects/text_file/united.txt","w");
    int num;
    if(p==NULL)
    {
        printf("ERROR");
    }
    else{
    for(i=0; i<n; i++)
    {
    printf("enter the number : ");
    scanf("%d",&num);
    fprintf(p,"%d ",num);
    }
    fclose(p);
    }
return 0;
}