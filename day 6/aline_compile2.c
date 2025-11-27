#include<stdio.h>
struct student{
    char name[20];
    float marks;
};
int main(void)
{
    struct student s[3]={
        {"harsha", 86.8},
        {"bharath", 62.2},
        {"mohan", 90.0}};
    
    printf("students with marks>80:\n");
    for (int i=0; i<3; i++)
    {
        if (s[i].marks>80.0)
        {
            printf("%s->%.2f\n", s[i].name, s[i].marks);
        }
    }
    return 0;
}