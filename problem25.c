// write a program which accept number from user and count frequency of such a digit which are less than 6

#include<stdio.h>
int count(int ino)
{
    int icnt = 0;
    int idigit = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    while (ino!=0)
    {
        idigit = ino%10;
        if(idigit<6)
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
    printf("Enter number : ");
    scanf("%d",&ivalue);
    int iret = 0;
    iret = count(ivalue);
    printf("Count of four in number is : %d ",iret);

}