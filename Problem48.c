// Accept n number from user and display all such number which contain 3 digit init

#include<stdio.h>
#include<stdlib.h>

void display(int *ptr, int ilength)
{
    int icnt = 0;
    for(icnt = 0; icnt < ilength; icnt++)
    {
        if (*(ptr + icnt) >= 100 && *(ptr + icnt) <= 999)
        {
            printf("%d\n", *(ptr + icnt));
        }
    }
}

int main()
{
    int isize = 0;
    int *ptr = NULL;
    int icnt = 0;

    printf("Enter the number of elements\n");
    scanf("%d", &isize);

    printf("Enter the elements\n");
    ptr = (int *)malloc(isize * sizeof(int));

    for(icnt = 0; icnt < isize; icnt++)
    {
        scanf("%d", &(*(ptr + icnt)));
    }

    display(ptr, isize);
    free(ptr);
    return 0;
}
