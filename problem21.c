// write a program which accept number from user and display its digits in reverse order
#include<stdio.h>
void displayDigit(int ino)
{
    int idigit = 0;
    if(ino<0)
    {
        ino = -ino; 
    }
    while (ino!=0)
    {
        idigit = ino%10;
        printf("%d",idigit);
        ino = ino/10;
    }
    
}
int main()
{
    int ivalue = 0;
    printf("Enter the number : \n");
    scanf("%d",&ivalue);
    displayDigit(ivalue);
    return 0;
}