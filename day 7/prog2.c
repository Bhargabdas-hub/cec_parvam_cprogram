#include<stdio.h>
void hanoi(int n, char src, char aux, char dest)
{
    if(n==1)
    {
        printf("move disk 1 from %c to %c\n", src, dest);
        return ;
    }
    hanoi(n-1, src, dest, aux);
    printf("move disk %d from %c to %c\n", n, src, dest);
    hanoi(n-1, aux, src, dest);
}
int main()
{
    int n;
    printf("enter number of disks:");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}