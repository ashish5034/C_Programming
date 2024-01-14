// write a program which accept number from user and display its factors in decreasing order
#include<stdio.h>
void factors(int iNum)
{
    int iCount=0;
    for(iCount=(iNum/2);iCount>0;iCount--)
    {
        if(iNum%iCount==0)
        {
            printf("%d\t",iCount);
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