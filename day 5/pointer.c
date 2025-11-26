#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p= &x;
    printf("value of x=%d\n",x);
    printf("address of x=%d\n", &x);
    printf("value stored in p=%p\n", p);
    printf("value at address p=%d\n", *p);
    return 0;
}