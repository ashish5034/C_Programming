// Accept number from user and return difference between largest number and smallest number

#include<stdio.h>
#include<stdlib.h>
int diff(int *ptr, int isize)
{
    int icnt=0;
    int imax=*(ptr+icnt);
    int imin = *(ptr+icnt);
    for(icnt=0;icnt<isize;icnt++)
    {
        if(imax<(*(ptr+icnt)))
        {
            imax = *(ptr+icnt);
        }
        else if(imin>(*(ptr+icnt)))
        {
            imin = *(ptr+icnt);
        }
    }
    return imax - imin;
}
int main()
{
    int isize = 0; int iret = 0; int *ptr = NULL;

    printf("Enter the size:\n");
    scanf("%d\n",&isize);

    ptr=(int *)malloc(isize*sizeof(int));

    printf("Enter the %d elements\n",isize);

    for(int icnt=0; icnt<isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }

    iret = diff(ptr,isize);
    printf("difference between max and min number is %d\n",iret);
    free(ptr);
    return 0;
}