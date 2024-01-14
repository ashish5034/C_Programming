// write a program which accept number from a user and print even factor of that number 
#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;
    printf("EvenFactors of %d are as follows :\n", iNo);
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0)
        {
           if(iCnt%2 == 0)
           {
             printf("%d \n",iCnt);
           }
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}