// write a program which accept number from user and check whether it contains 0 in it or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef bool BOOL;
BOOL chkzero(int ino)
{
    int idigit = 0;
    BOOL bflag = FALSE;
    if(ino<0)
    {
        ino = -ino;
    }
    while (ino!=0)
    {
        idigit = ino%10;
        if (idigit==0)
        {
            bflag =TRUE;
            break;
        }
        ino = ino/10;
    }
    return bflag;
}
int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;
    printf("Enter the values\n");
    scanf("%d",&ivalue);
    bret = chkzero(ivalue);
    if (bret == TRUE)
    {
        printf("It contains ZERO\n");
    }
    else
    {
        printf("There is no ZERO");
    }
    
    return 0;
}