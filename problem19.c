// write aprogram which accept number from user and return summation of its non factors
#include<stdio.h>

int sumofnonfactors(int ino)
{
    int icnt = 0;
    int isum = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        if(ino%icnt!=0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;
    printf("Enter the value: \n");
    scanf("%d",&ivalue);

    iRet = sumofnonfactors(ivalue);
    printf("sum of non factor is : %d\n",iRet);
    
    return 0;
}