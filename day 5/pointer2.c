#include<stdio.h>
int main()
{
    int number = 25;
    int *ptr = &number;
    printf("number=%d\n", number);
    printf("number via pointer=%p\n", *ptr);
    *ptr=50;
    printf("updated number=%d\n", number);
    return 0;
}