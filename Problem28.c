// write program which accept number from user and return count inbetween 3 and 7
#include<stdio.h>
int count(int ino)
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
        if(idigit>3 && idigit<7)
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
    iret = count(ival);
    printf("%d",iret);
    return 0;
}