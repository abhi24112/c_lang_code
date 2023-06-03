#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node*  next;
};
void linkedlist (struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element :%d\n",ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node * insertAtFirst(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc (sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next =second;

    second -> data = 11;
    second -> next = third;

    third -> data = 15;
    third -> next = fourth;
    
    fourth -> data = 30;
    fourth -> next = NULL;

    printf("list before insertion:\n");
    linkedlist(head);
    printf("list after the insertion:\n");
    head=insertAtFirst(head,55);
    linkedlist(head);
    return 0;
}
