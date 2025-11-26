#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr1, *ptr2, size,size2;
 // Allocate memory for four integers
 size = 4 * sizeof(*ptr1);
 ptr1 = malloc(size);
 printf("%d bytes allocated at address %p \n", size, ptr1);
 // Resize the memory to hold six integers
 size2 = 6 * sizeof(*ptr1);
 ptr2 = realloc(ptr1, size2);
 printf("%d bytes reallocated at address %p \n", size2, ptr2);
 return 0;
} 
