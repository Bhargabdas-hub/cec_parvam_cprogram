#include <stdio.h>

int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num)
    {
        printf("non-zero value treated as TRUE\n");
    }
    else
    {
        printf("zero treated as FALSE\n");
    }
    if (num > 0)
    {
        if (num % 2 == 0)
        printf("positive even number\n");
    
    else
    
    printf("positive odd number\n");
    }
     else
     {
        printf("number is zero or negative\n");
     }
return 0;
}