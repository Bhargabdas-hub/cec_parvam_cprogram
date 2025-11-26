#include<stdio.h>
int main()
{
    int marks[5]={78, 95, 60, 88, 72};
    int i;
    int max=marks[0];
    int min=marks[0];
    int searchValue = 88;
    int foundindex=-1;
    printf("array elements traversing:\n");
    for ( i=0;i<5;i++)
    {
        printf("marks[%d]=%d\n", i, marks[i]);
    }
    for (i=1;i<5;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        if (marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("\n maximum mark=%d\n",max);
    printf(" minimum marks=%d\n", min);
    for (i=0;i<5;i++)
    {
        if (marks[i] == searchValue)
        {
            foundindex=i;
            break;
        }
    }
    if (foundindex !=-1)
    {
        printf("\nvalue%d found at index %d\n", searchValue, foundindex);
    }
    else 
    {
        printf("\nvalue %d not found in array\n", searchValue);
    }
    return 0;
}   