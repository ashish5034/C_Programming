// Accept number from user and if number is less than 10 then print hello otherwise print Demo
#include<stdio.h>
void display(int no)
{
    if(no<10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number : ");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}