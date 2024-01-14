// Accept N  number from user and accept range , display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void range(int *ptr, int ilength, int istart, int iend)
{
    int icnt = 0;
    int ival = ilength;
    for(icnt=0; icnt<ilength; icnt++)
    {
        if(((*(ptr+icnt))>=istart) && (*(ptr+icnt)<=iend))
        {
            printf("Elements are : %d\n",*(ptr+icnt));
        }
    }
}

int main()
{
    int isize = 0;
    int ivalue1 = 0;
    int ivalue2 = 0;
    int *ptr = NULL;
    int icnt = 0;
    int iret = 0;

    printf("Enter the number of elements:\n");
    scanf("%d\n",&isize);

    printf("Enter the starting poitn:\n");
    scanf("%d\n",&ivalue1);

    printf("Enter the starting poitn:\n");
    scanf("%d\n",&ivalue2);

    ptr = (int *)malloc(isize * sizeof(int));

    if(ptr ==NULL)
    {
        printf("Not able to allocate memory\n");
        return -1;
    }
    printf("Enter the elements\n");
    for(icnt=0; icnt<isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    range(ptr,isize,ivalue1,ivalue2);
    free(ptr);
    return 0;
}