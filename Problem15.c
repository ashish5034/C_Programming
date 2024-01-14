// Accept character from user and check whether it is vowel or not 
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef bool BOOL;

BOOL checkVowel(char cVal)
{
    if((cVal=='A')||(cVal=='a')||(cVal=='e')||(cVal=='E')||(cVal=='I')||(cVal=='i')||(cVal=='o')||(cVal=='O')||(cVal=='U')||(cVal=='u'))
    {
        return TRUE;
    }else{
        return FALSE;
    }

}
int main()
{
    char cValue='\0';
    BOOL bret = FALSE;
    printf("Enter character: ");
    scanf("%c",&cValue);
    bret = checkVowel(cValue);
    
    if (bret==TRUE)
    {
        printf("its Vowel");
    }else{
        printf("its not vowel");
    }
    return 0;

}