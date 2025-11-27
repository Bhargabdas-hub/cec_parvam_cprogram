#include<stdio.h>
#define max 5
int stack[max];
int top=-1;

void push (int value)
{
    if (top==max - 1)
    {
        printf("stack overflow\n");
    }
    else {
         top++;
         stack[top]=value;
         printf("%d pushed\n", value);
    }
}
void poop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else{
        printf("%d poopped\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top==-1)
    {
        printf("stack empty\n");
    }
    else {
        for (int i=top; i>=0; i--)
        {
            printf("%d", stack[i]);
        }
        printf("\n");
        }
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    poop();
    display();
    return 0;
}