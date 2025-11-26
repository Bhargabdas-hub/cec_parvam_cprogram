#include <stdio.h>
int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main() {
    int n = 1234;
    printf("Sum = %d", sumDigits(n));
}   


