#include<stdio.h>
#include<stdlib.h>

int *stack, top=-1, size;
void push(int value)
{
    if(top==size-1)
    printf("overflow/n");
else
    stack[++top]=value;
}
void pop()
{
    if(top==-1)
    printf("underflow\n");
else
printf("popped: %d\n", stack[top--]);
}
int main()
{
    printf("enter stack size:");
    scanf("%d, &size");
    stack=(int *)malloc (size * sizeof(int));
    push(10);
    push(20);
    pop();
    free(stack);
    return 0;

}