#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
int main(void)
{
    struct employee emp[3];
    int i;
    printf("enter data for 3 employees (name id salary):\n");
    for (i=0; i<3; i++)
    {
        printf("employee %d:", i);
        scanf("%s %d %f",
        emp[i].name,
        &emp[i].id,
        &emp[i].salary);
    }
    int topindex=0;
    for(i=1; i<3; i++)
    {
        if(emp[i].salary>emp[topindex].salary)
        {
            topindex=i;
        }
        
    }
    struct employee *ptop=&emp[topindex];
    printf("\nemployee with highest salary:\n");
    printf("name=%s\n", ptop->name);
    printf("ID=%d\n", ptop->id);
    printf("salary=%.2f\n",ptop->salary);
    return 0;
}