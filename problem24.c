// write a program which accept number from user and count frequrncy of 4 in it

#include<stdio.h>
int countfour(int ino)
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
        if(idigit == 4)
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
    iret = countfour(ivalue);
    printf("Count of four in number is : %d ",iret);

}