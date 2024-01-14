// Accept N number from user and add digit to it
#include<stdio.h>
#include<stdlib.h>

void digitsum(int *ptr, int ilength)
{
    int icnt = 0;
    int idigit = 0;
    int *iptr = NULL;
    int isum = 0;

    for(icnt = 0; icnt < ilength; icnt++)
    {
        isum = 0;
        iptr = ptr + icnt; // Set iptr to point to the current number

        int temp = *iptr; // Store the original value of the number

        while(temp != 0)
        {
            idigit = temp % 10;
            isum = isum + idigit;
            temp = temp / 10;
        }
        printf("%d\t", isum);
    }
}

int main()
{
    int isize = 0;
    int *ptr = NULL;
    int icnt = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &isize);

    printf("Enter the elements:\n");
    ptr = (int *)malloc(isize * sizeof(int));

    for(icnt = 0; icnt < isize; icnt++)
    {
        scanf("%d", &(*(ptr + icnt)));
    }

    digitsum(ptr, isize);
    free(ptr);
    return 0;
}