// Accept n numbers from user and return frequency of 11 from it 

#include<stdio.h>
#include<stdlib.h>

int frequency(int *ptr, int ilength)
{
    int icnt = 0;
    int cnt = 0;

    for(icnt=0; icnt<ilength;icnt++)
    {
        if(*(ptr+icnt)==11)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int isize = 0;
    int *ptr = NULL;
    int icnt = 0;
    int iret = 0;

    printf("Enter the number of elements \n");
    scanf("%d\n",&isize);

    ptr =(int *)malloc(isize*sizeof(int));

    printf("Enter elements in array\n");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }

    iret = frequency(ptr, isize);
    printf("Frequency of 11 is : %d\n",iret);

    free(ptr);
    return 0;
}