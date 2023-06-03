#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedlist(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr -> data);
        ptr = ptr -> next;
    }
}
struct Node * deletefirst(struct Node *head,int index)
{
    struct Node * p =head;
    struct Node * q = head -> next;
    int i=0;
    while(q-> next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main()
{
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 23;
    head -> next = second;

    second -> data = 34;
    second -> next = third;
    
    third -> data = 45;
    third -> next = fourth;

    fourth -> data = 48;
    fourth -> next = fifth;

    fifth -> data = 100;
    fifth -> next = NULL;

    head = deletefirst(head,2);
    linkedlist(head);
    return 0;
}