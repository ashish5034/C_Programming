// program to print n to 1 numbers on screen 
#include<stdio.h>
void display(int num)
{
    int i;
    for(i=num; i>0;i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int number;
    printf("Enter number of iteration: ");
    scanf("%d",&number);
    display(number);

    return 0;
}