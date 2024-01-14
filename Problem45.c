// Accept N Number from user and return producct of all number
#include<stdio.h>
#include<stdlib.h>

int product(int *ptr, int ilength)
{
    int icnt = 0;
    int imult = 1;
    int cnt = 0;
    for(icnt=0; icnt<ilength;icnt++)
    {
        if(((*(ptr+icnt))%2)!=0)
        {
            imult = imult*(*(ptr+icnt));
            // cnt++;
        }
    }
    return imult;
}

int main()
{
    int isize = 0; int *ptr = NULL; int icnt = 0; int iret = 0;

    printf("Enter the number of elements \n");
    scanf("%d\n",&isize);

    ptr =(int *)malloc(isize*sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memorry\n");
        return -1;
    }
    printf("Enter the elements \n");
    for(icnt=0; icnt<isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    iret = product(ptr,isize);

    printf("Multiplication is : %d\n", iret);
    free(ptr);
    return 0;
}