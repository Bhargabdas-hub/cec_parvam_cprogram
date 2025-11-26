#include <stdio.h>

int main(void) {
    char c = 'A';
    printf("ASCII of %c = %d\n", c, (int)c); // cast to int to show numeric code

    // print A-Z
    for (c = 'A'; c <= 'Z'; ++c) {
        printf("%c: %d\n", c, (int)c);
    }
    return 0;
}
