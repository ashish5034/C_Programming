// write a program which accept number from user and display its multiplication of factors
#include<stdio.h>
int multiplicationfactors(int iNum)
{
    int iCount=0;
    int mult =1;
    for(iCount=1;iCount<=(iNum/2);iCount++)
    {
        if(iNum%iCount==0)
        {
             mult = mult * iCount;
        }
    }
    return mult;
}

int main()
{
    int iNo=0;
    printf("Enter number: ");
    scanf("%d\n",&iNo);
    int ret = multiplicationfactors(iNo);
    printf("Multiplication of factor is : %d\n",ret);
    return 0;
}