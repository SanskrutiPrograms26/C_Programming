///////////////////////////////////////////////////////////////////////
//
// Function name : Chkvowel
// Description   : It is used to check whether the string contains vowels
// Input         : String
// Output        : TRUE if vowel is present, otherwise FALSE
// Author        : Sanskruti Sanjay Raut
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL Chkvowel(char *str)
{

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE; 

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    bRet = Chkvowel(arr);
    if(bRet == TRUE)
    {
        printf("Contain vowels");
    }
    else
    {
        printf("There is no vowel");
    }

    return EXIT_SUCCESS;

}