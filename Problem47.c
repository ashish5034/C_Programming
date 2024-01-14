// Accept number from user and return the smallest number

#include<stdio.h>
#include<stdlib.h>
int min(int *ptr, int isize)
{
    int icnt=0;int imin = *(ptr);
    for(icnt=0;icnt<isize;icnt++)
    {
        if(imin>(*(ptr+icnt)))
        {
            imin = *(ptr+icnt);
        }
    }
    return imin;
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

    iret = min(ptr,isize);
    printf("min number is %d\n",iret);
    free(ptr);
    return 0;
}