#include<stdio.h>

void Display(int number)
{
    int i=1;
    while(i<=number)
    {
        printf("*\t");
        i++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter iValue: ");
    scanf("%d",&iValue);
        Display(iValue);
    return 0;
}