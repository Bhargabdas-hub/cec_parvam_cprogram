#include<stdio.h>
int main(void)
{
    char names[3][20]={
        "harsha harsha harsha",
        "harsha harsha harsha",
        "harsha harsha harsha"
    };
    int i;
    printf("list of names:\n");
    for(i=0; i<3; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}