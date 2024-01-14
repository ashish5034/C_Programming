// write a program which accept number from user and display its all non factors
#include<stdio.h>
void factors(int iNum)
{
    int iCount=0;
    
    for(iCount=1;iCount<=(iNum/2);iCount++)
    {
        if(iNum%iCount != 0)
        {
            printf("%d",iCount);
        }
    }
}

int main()
{
    int iNo=0;
    printf("Enter number: ");
    scanf("%d\n",&iNo);
    factors(iNo);
    return 0;
}