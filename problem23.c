// write a program which accept number from user and count frequrncy of 2 in it

#include<stdio.h>
int displayDigit(int ino)
{
    int idigit = 0;
    int icnt = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    while (ino!=0)
    {
        idigit = ino%10;
        if(idigit==2)
        {
            icnt++;
        }
        ino = ino/10;
    }
    return icnt;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number : \n");
    scanf("%d",&ivalue);
    iret = displayDigit(ivalue);
    printf("count of two's in number are %d",iret);
    return 0;
}