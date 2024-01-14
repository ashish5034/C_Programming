#include<stdio.h>

int display(int no1, int no2)
{
    int i;
    for(i=1; i<=no2;i++)
    {
        printf("%d\t",no1);
    }
}

int main()
{
    int value1,value2;
    printf("Enter numbers : ");
    scanf("%d%d",&value1, &value2);
    
    display(value1,value2);
    
    return 0;
}