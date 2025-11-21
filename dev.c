#include<stdio.h>

int main(void)
{
    int a = 9, b = 4;
    printf("9 / 4 (int) = %d\n", a / b);
    printf("9.0 / 4 (float) = %.2f\n", 9.0 / b);
    printf("(float)9 / 4 = %.2f\n", (float)a / b);
    return 0;

}

