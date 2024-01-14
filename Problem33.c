// Accept number from user and display such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int isize = 0;
    int *ptr = NULL;
    int icnt = 0;
    printf("Enter the number of elements:\n");
    scanf("%d",&isize);
    printf("Enter the values: \n");
    ptr = (int *)malloc(isize*sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(icnt=0; icnt<isize;icnt++)
    {
        scanf("%d",&(*(ptr+icnt)));
    }
}