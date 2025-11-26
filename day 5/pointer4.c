#include<stdio.h>
struct student
{
    int age;
    float marks;
};
int main()
{
    int intvar=10;
    float floatvar=5.5;
    char charvar= 'A';
    struct student s1={20, 85.5};
    int *pint=&intvar;
    float *pfloat=&floatvar;
    char *pchar=&charvar;
    struct student*pstudent=&s1;

    printf("integer via pointer=%d\n", *pint);
    printf("float via pointer=%f\n", *pfloat);
    printf("char via pointer=%c\n", *pchar);
    printf("student age via pointer=%d\n", pstudent->age);
    printf("student marks via pointer=%.1f\n", pstudent->marks);
    return 0;
}
