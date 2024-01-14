// Accept two numbers and check whether the number is divisible by 5 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int iNo)
{
    if(iNo%5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int ivlaue=0;
    BOOL bret = FALSE;
    printf("Enter the number: ");
    scanf("%d",&ivlaue);
    bret=check(ivlaue);

    if(bret == TRUE)
    {
        printf("Number is divisible by five \n");

    }else
    {
        printf("Number is not divisible by five ");
    }
    return 0;
}
