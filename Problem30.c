// write program which accept number from user and return diff between summation of even digit and summation of odd digits
#include<stdio.h>
int evencount(int ino)
{
    int idigit = 0;
    int sum1 = 0;
    int sum2 = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while (ino != 0)
    {
        idigit = ino % 10;
        if(idigit % 2 == 0)
        {
            sum1 = sum1 + idigit;
        }
        else if(idigit % 2 != 0)
        {
            sum2 = sum2 + idigit;
        }
        ino = ino /10;
    }
    return sum1 - sum2;
}
int main()
{
    int ival = 0;
    printf("Enter number: ");
    scanf("%d",&ival);
    int iret = 0;
    iret = evencount(ival);
    printf("%d",iret);
    return 0;
}