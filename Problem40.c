// Accept n number from user and accept one another number as no, return frequency of no from it

#include<stdio.h>
#include<stdlib.h>

int frequency(int *ptr, int ilength, int ino)
{
    int icnt = 0; int cnt = 0;
    for(icnt=0; icnt<ilength;icnt++)
    {
        if(*(ptr+icnt)==ino)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int ino=0;
    int icnt = 0;
    int isize = 0;
    int *ptr = NULL;
    printf("Enter number of elements:\n");
    scanf("%d\n",&isize);

    printf("Enter the number: \n");
    scanf("%d\n",&ino);

    ptr = (int *)malloc(isize*sizeof(int));

    printf("Enter %d elements in array:\n",isize);
    for(icnt=0; icnt<isize; icnt++)
    {
        scanf("%d\n",&(*(ptr+icnt)));
    }
    
    int iret = 0;
    iret = frequency(ptr,isize,ino);
    printf("Frequency of %d is %d \n",ino,iret);
    free(ptr);
    
    return 0;
}