// program to print 5 times jay ganesh ... on screen
#include<stdio.h>
void jayGanesh(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int no;
    printf("Enter number: ");
    scanf("%d\n",&no);
    jayGanesh(no);
    // for(int i=1;i<=5;i++)
    // {
    //     printf("Jay Ganesh...\n");
    // }

    return 0;
}