#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    int max= (a>b) ? a:b;
    printf("greater number is %d\n", max);

    return 0;
}