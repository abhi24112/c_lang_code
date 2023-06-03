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
struct Node * deletefirst(struct Node *head)
{
    struct Node * ptr =head;
    head = head -> next;
    free(ptr);
    return head;
}
int main()
{
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 23;
    head -> next = second;

    second -> data = 34;
    second -> next = third;
    
    third -> data = 45;
    third -> next = NULL;

    head = deletefirst(head);
    linkedlist(head);
    return 0;
}