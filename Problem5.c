// accept number from user and print star on screen
#include<stdio.h>

void display(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("*\t");
    }
}
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    display(number);
    return 0;

}