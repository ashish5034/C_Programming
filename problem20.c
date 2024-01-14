// write aprogram which accept number from user and return summation of its non factors
#include<stdio.h>

int sumofnonfactors(int ino)
{
    int icnt = 0;
    int isum = 0;
    int isum2 = 0;
    int diff = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        if(ino%icnt!=0)
        {
            printf("non factors %d \n",icnt);
            isum = isum + icnt; 
        }
        
        if(ino%icnt==0)
        {
            printf("factors %d \n",icnt);
            isum2 = isum2 + icnt;
        }
    }
    printf("Sum of factors %d \n",isum2);
    printf("Sum of non factors %d \n",isum);
    diff = isum-isum2;
    return diff;
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