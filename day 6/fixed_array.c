#include<stdio.h>
#define max 5

int queue[max];
int front=-1, rear=-1;
void enqueue(int value)
{
    if(rear==max-1)
    {
        printf("%d queue full\n");
    }
    else{
        if(front==-1)
        front=0;
    queue[++rear]=value;
    printf("%d enqueued\n", value);
    }
}
void dequeue()
{
    if(front==-1||  front>rear)
    {
        printf("queue empty\n");
    }
    else{
        printf("%d dequeued\n", queue[front++]);
    }
}
void display()
{
    for(int i=front; i<=rear; i++)
    {
        printf("%d", queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;

}