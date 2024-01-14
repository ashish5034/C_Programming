// Accept number from user and return the largest number

#include<stdio.h>
#include<stdlib.h>
int max(int *ptr, int isize)
{
    int icnt=0;int imax=0;
    for(icnt=0;icnt<isize;icnt++)
    {
        if(imax<(*(ptr+icnt)))
        {
            imax = *(ptr+icnt);
        }
    }
    return imax;
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

    iret = max(ptr,isize);
    printf("max number is %d\n",iret);
    free(ptr);
    return 0;
}