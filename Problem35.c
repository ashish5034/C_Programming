// Accept n number from user display such elements which are divisible by 11
#include<stdio.h>
#include<stdlib.h>

void display(int *iptr, int length)
{
    int icnt = 0;
    printf("values which are divisible by 11 are as follows:\n" );
    for(icnt=0;icnt<length;icnt++)
    {
        if((*(iptr+icnt))%11==0)
        
        {
            printf("%d\n",*(iptr+icnt));
        }
    }
}

int main()
{
    int icnt=0;
    int isize=0;
    int *ptr = NULL;

    printf("Enter the size of the number of value u want to store in it \n");
    scanf("%d\n",&isize);

    printf("Enter the values: \n");
    ptr = (int *)malloc(isize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    display(ptr,isize);
    free(ptr);
    return 0;
}