// write program which accept number from user and return count of odd digit
#include<stdio.h>
int oddcount(int ino)
{
    int idigit = 0;
    int count = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while (ino != 0)
    {
        idigit = ino % 10;
        if(idigit % 2 != 0)
        {
            count++;
        }
        ino = ino /10;
    }
    return count;
}
int main()
{
    int ival = 0;
    printf("Enter number: ");
    scanf("%d",&ival);
    int iret = 0;
    iret = oddcount(ival);
    printf("%d",iret);
    return 0;
}