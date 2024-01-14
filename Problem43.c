// Accept N number from user and accept one another number as No , return index of its last occurance of that number

#include<stdio.h>
#include<stdlib.h>

int firstOcc(int *ptr, int ilength, int ino)
{
    int icnt = 0;
    for(icnt=ilength-1; icnt>=0; icnt--)
    {
        if((*(ptr+icnt))==ino)
        {
            break;
        }
    }
    if(icnt<ilength)
    {
        return icnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int isize =0;
    int ivalue = 0;
    int *ptr = NULL;
    int icnt =0;
    int iret = 0;
    
    printf("Enter the number of elements:\n");
    scanf("%d\n",&isize);

    printf("Enter the number:\n");
    scanf("%d\n",&ivalue);

    ptr = (int *)malloc(isize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Not able to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(icnt = 0; icnt < isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    iret = firstOcc(ptr,isize,ivalue);
    if(iret==-1)
    {
        printf("There is no such a number\n");
    }
    else
    {
        printf("last ocuurence of the number is %d\n",iret);
    }
    free(ptr);
    return 0;
}