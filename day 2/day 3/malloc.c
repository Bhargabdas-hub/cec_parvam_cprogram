#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr1 = malloc(4);
 char *ptr2 = (char*) ptr1;
 ptr1[0] =1726254242;
 printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
 return 0;
} 
