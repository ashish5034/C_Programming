// program to devide first number by second number 
#include<stdio.h>

int devide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2<0)
    {
        return -1;
    }
    else if(iNo2 == 0)
    {
        printf("Infinity\n");
    }
    iAns = iNo1/iNo2;
    return iAns;
}

int main()
{
    int ivalue1,ivalue2;
    printf("Enter ivalue1: ");
    scanf("%d",&ivalue1);
    printf("Enter ivalue2: ");
    scanf("%d",&ivalue2);

    int iRet = 0;
    iRet = devide(ivalue1,ivalue2);
    printf("Division is %d\n",iRet);

    return 0;
}