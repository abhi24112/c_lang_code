#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
}b[100];
int main()
{
    int i,n;
    printf("Enter the no of student: ");
    scanf("%d",&n);
    printf("*****Enter the record of %d student*****\n",n);
    for(i=0; i<n; i++)
    {
        printf("enter the name of student: ");        
        scanf("%s",b[i].name);                                        /* in the scanf statement we have to remove "&" to remove the error { but it is not compalsory}  */
        printf("enter the roll no of the student: ");                                                                  
        scanf("%d",&b[i].rollno);
        printf("enter the marks of the student: ");
        scanf("%f",&b[i].marks);
    }
    char find[50];
    printf("Enter the name of student which you want to find: ");
    scanf("%s",find);
    for (i=0; i<n; i++)
    {
        if(strcmp(find,b[i].name)==0)
        {
            printf("\nName of the student: %s",find);
            printf("\nRoll no of the student: %d ",b[i].rollno);
            printf("\nMarks of the student: %f ",b[i].marks);
        }
    }
return 0;
}
