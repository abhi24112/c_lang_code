#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linklist(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr -> data);
        ptr = ptr -> next;
    }
}
struct Node * insertbetween(struct Node *head,int index,int data)
{
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p = p -> next;
        i++;
    }
    ptr -> data =data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    
    head -> data = 1;
    head -> next = second;

    second -> data = 23;
    second -> next = third;

    third -> data = 45;
    third -> next = NULL;
    
    printf("list before the insertion:\n");
    linklist(head);
    printf("list after the insertion:\n");
    head = insertbetween(head,1,34);
    linklist(head);
    return 0;
}