#include <stdio.h>
#include <stdlib.h>
# define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x) //This fuction helps to enqueue the element into the queue
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
void display() //this fuction helps to print the queue
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else{
        printf("The Queue is:\n");
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
    return 0;
}