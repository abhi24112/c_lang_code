#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * p;
    int n; 
    p=fopen("/home/abhi/projects/text_file/united.txt","w");
    if(p==NULL)
    {
        printf("ERROR");
    }
    printf("enter the number : ");
    scanf("%d",&n);
    fprintf(p,"%d",n);
    fclose(p);
return 0;
}