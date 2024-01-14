// accept number from user and check whether number is even or not
#include<stdio.h>

int check(int no)
{
    if(no%2 == 0)
    {
        printf("Number is even :%d \n",no);
    }
    else
    {
        printf("Number is odd :%d \n",no);
    }
} 

int main()
{
    int value=0;
    printf("Enter number: ");
    scanf("%d",&value);
    
    check(value);
    
    return 0;
}