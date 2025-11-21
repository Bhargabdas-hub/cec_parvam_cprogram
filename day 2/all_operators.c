#include <stdio.h>

struct person
{
    int age;
};

int main()
{
    int a = 10, b = 3;
    int x = 5;
    int arr[5] = {10, 20, 30, 40, 50};

    printf("=== BITWISE OPERATORS ===\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\n=== ADDRESS-OF & VALUE-AT ===\n");
    int *ptr = &x;
    printf("value of x = %d\n", x);
    printf("address of x = %p\n", &x);
    printf("value using pointer = %d\n", *ptr);

    printf("\n=== UNARY OPERATORS ===\n");
    printf("x++ = %d\n", x++);
    printf("++x = %d\n", ++x);
    printf("-x = %d\n", -x);

    printf("\n=== DOT OPERATOR ===\n");
    struct person p = {25};
    printf("person age = %d\n", p.age);

    printf("\n=== SUBSCRIPT OPERATOR ===\n");
    printf("arr [2] = %d\n", arr[2]);

    return 0;
}