// accept N number from user and display such elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void display(int *iptr, int ilength)
{
    int iCnt = 0;
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((*(iptr+iCnt))%5==0)
        {
            printf("Value divisible by 5 is : %d\n",*(iptr+iCnt));
        }
    }
}

int main()
{
    int isize = 0;
    int *ptr = 0;
    int icnt = 0;

    printf("Enter the number of elements\n");
    scanf("%d\n",&isize);

    ptr = (int *)malloc(isize*sizeof(int));
    printf("Enter the values: \n");
    
    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d", &(*(ptr+icnt)));
    }
    display(ptr,isize);
    free(ptr);
    return 0;
}