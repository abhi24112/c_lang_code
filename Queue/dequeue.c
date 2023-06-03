#include <stdio.h>
#include <stdlib.h>
# define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if(rear == n-1)
    {
        printf("Overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue() // This fuction helps to remove the first element from the queue
{
    if(front == -1 && rear == -1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\nthe dequeued element is: %d",queue[front]);
        front++;
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else{
        printf("\nThe Queue is:\n");
        for(int i=front; i<rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(29);
    enqueue(8);
    enqueue(67);
    display();
    dequeue();
    display();
    return 0;
}