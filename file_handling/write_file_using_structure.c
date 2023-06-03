#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int rollno; 
    int marks[20];
}b[20];
int main()
{
    FILE * p;
    p=fopen("/home/abhi/projects/text_file/united.txt","w");
    if(p==NULL)
    {
        printf("ERROR");
    }
    int i,j,n,sub;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    printf("Enter the no of subject: ");
    scanf("%d",&sub);
    printf("***Enter the record of student***\n");
    for (i=0; i<n; i++)
    {
        printf("Enter the name of student : ");
        scanf("%s",&b[i].name);
        printf("Enter the rollno : ");
        scanf("%d",&b[i].rollno);
        for(j=0; j<sub; j++)
        {
            printf("Enter the marks of subject %d: ",j+1);
            scanf("%d",&b[i].marks[j]);
        }
    }
    for(i=0; i<n; i++)
    {
        fprintf(p,"Name: %s\n",b[i].name);
        fprintf(p,"Roll_no: %d\n",b[i].rollno);
        for(j=0; j<sub; j++)
        {
            fprintf(p,"Marks of subject %d is %d\n",j+1,b[i].marks[j]);
        }
    }
    fclose(p);
return 0;
}
