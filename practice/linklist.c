#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *next;
};
void linkedlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Data:%d\n",ptr ->  num);
        ptr =ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head -> num =7;
    head -> next =second;

    second -> num = 11;
    second -> next = third;

    third -> num = 15;
    third -> next = fourth;
    
    fourth -> num = 30;
    fourth -> next = NULL;

    linkedlist(head);
    return 0;
}