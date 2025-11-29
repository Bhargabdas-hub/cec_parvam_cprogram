#include<stdio.h>
int main()
{
    char name1[10];
    char name2[10];

    printf("enter name using gets (unsafe):");
    gets(name1);
    printf("you entered: %s\n", name1);
    
    printf("enter name using fgets (safe):");
    fgets(name2, sizeof(name2), stdin);
    printf("you entered: %s\n", name2);
    return 0;
}