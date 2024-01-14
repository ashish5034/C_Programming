// Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int diff(int *iPtr, int iSize)
{
    int isum1=0, isum2=0,icnt=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
        if(*(iPtr+icnt)%2==0)
        {
            isum1 = isum1 + *(iPtr+icnt);
        }
        else
        {
        
            isum2 = isum2 + *(iPtr+icnt);
        
        }
    }
    return isum1-isum2;
}

int main()
{
    int isize = 0;
    int *ptr = NULL;

    printf("Enter the size \n");
    scanf("%d", &isize);

    ptr = (int *)malloc(isize*sizeof(int));//dynamic memory allocation
    printf("Enter the elements \n");
    for(int icnt = 0; icnt<isize; icnt++)
    {
        scanf("%d", &(*(ptr+icnt))); //accepting the value using for loop 
    }
    int iret = diff(ptr, isize);
    printf("Difference between summation of even elements and summation of odd elements are : %d", iret);
    return 0 ;
}