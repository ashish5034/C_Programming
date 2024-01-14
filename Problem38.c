// accept number from user and check whether that number contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL check(int *ptr, int ilength)
{
    int icnt = 0;
    BOOL flag = FALSE;

    for(icnt=0;icnt<ilength;icnt++)
    {
        if(*(ptr+icnt)==11)
        {
            return TRUE;
            break;
        }
    }
    return flag;
}

int main()
{
    int isize = 0;
    int *ptr =NULL;
    int icnt = 0;
    BOOL bret = FALSE;

    printf("Enter the number of elements:\n");
    scanf("%d\n",&isize);

    ptr = (int *)malloc(isize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Cannot Allocate Memory\n");
        return -1;
    }

    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    bret =check(ptr, isize);

    if(bret==TRUE)
    {
        printf("11 is Present init\n");
    }
    else
    {
        printf("11 is not Present init\n");
    }
    return 0;
}