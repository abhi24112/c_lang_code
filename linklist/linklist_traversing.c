#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextptr;
};
void linklist(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element: %d\n",ptr -> data);
        ptr = ptr -> nextptr;
    }
}
int main()
{
    struct Node *head;   // pointers are created 
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));    //allocating memory to the pointer
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head -> data =7;
    head -> nextptr = second;
    
    second -> data = 11;
    second -> nextptr =third;

    third -> data = 66;
    third -> nextptr = fourth;

    fourth -> data = 24;
    fourth -> nextptr = NULL;
    linklist(head);
    return 0;
}