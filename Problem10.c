// accept number from user and check whether number is even or not
#include<stdio.h>
#define TRUE 1
#define FLASE 0
typedef int BOOL;

BOOL check(int no)
{
    if(no%2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FLASE;
    }
} 

int main()
{
    int value=0;
    printf("Enter number: ");
    scanf("%d",&value);
    BOOL ret = FLASE;
    ret = check(value);
    if(ret==TRUE)
    {
        printf("Number is even: \n");
    }
    else
    {
        printf("Number is odd: ");
    }

    return 0;
}