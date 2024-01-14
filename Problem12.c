#include<stdio.h>

void checkFactors(int no)
{
    int i;
    if(no<0)
    {
        no=-no;
    }
    for (i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int value=0;
    printf("Enter number: ");
    scanf("%d",&value);
    checkFactors(value);
    return 0;
}