#include <stdio.h>
int main()
{
    FILE * p;
    int num;
    int num2;
    p=fopen("/home/abhi/projects/text_file/united.txt","r");
    if(p==NULL)
    {
        printf("file is not present in the system");
    }
    else{
        fscanf(p,"%d",&num);
        fscanf(p,"%d",&num2);
        printf("Data present in the file is : %d\n",num);
        printf("Data present in the file is : %d\n",num2);
    }
fclose(p);
return 0;
}


