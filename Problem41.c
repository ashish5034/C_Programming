// Accept n numbers from user and accept one another number from user and check whethe the no is present or not 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int *ptr, int ilength, int ino)
{
    int icnt = 0;
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(*(ptr+icnt)==ino)
        {
            break;
        }
    }
    if(icnt<ilength)
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
    int isize = 0;
    int ivalue = 0;
    int icnt = 0;
    int *ptr = NULL;
    BOOL bret = FALSE;

    printf("Enter the number of element\n");
    scanf("%d\n", &isize);

    printf("Enter the number\n");
    scanf("%d\n",&ivalue);

    ptr = (int *)malloc(isize*sizeof(int));

    printf("Enter the elements \n");

    for(icnt=0; icnt<isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }

    bret = check(ptr, isize, ivalue);
    if(bret==TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    return 0;
}