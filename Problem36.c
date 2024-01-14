// accept n number from user and return frequency of even number
#include<stdio.h>
#include<stdlib.h>

int evenCount(int *iptr, int length)
{
    register int icnt=0;
    int cnt = 0;
    for(icnt=0;icnt<length;icnt++)
    {
        if((*(iptr+icnt))%2==0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int icnt = 0;
    int *ptr = NULL;
    int isize = 0;
    int iret  = 0;

    printf("Enter Number of elements :\n");
    scanf("%d\n",&isize);

    printf("Enter the values: \n");
    ptr = (int *)malloc(isize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory is not allocated : \n");
        return -1;
    }
    for(icnt=0; icnt<isize;icnt++)
    {
        scanf("%d\n",&*(ptr+icnt));
    }
    iret = evenCount(ptr,isize);
    printf("Count of even number is :%d \n",iret);
    free(ptr);
    return 0;
}