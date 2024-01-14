// Accept number from user and display such elements which are divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>

void display(int *iptr, int length)
{
    int icnt=0;
    for(icnt=0;icnt<length;icnt++)
    {
        if(((*(iptr+icnt))%5==0)&&((*(iptr+icnt))%3==0))
        {
            printf("Given value is divisible by 3 and 5 is:%d ",*(iptr+icnt));
        }
    }
}

int main ()
{
    int isize = 0;
    int *ptr = NULL;
    int icnt = 0;
    printf("Enter the number of elements :\n");
    scanf("%d\n",&isize);
    printf("Enter the values:\n");
    ptr = (int *)malloc(isize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&(*(ptr+icnt)));
    }
    display(ptr,isize);
    free(ptr);
    return 0;
}