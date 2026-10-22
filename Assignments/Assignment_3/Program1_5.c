///////////////////////////////////////////////////////////////////
// 
// Function name : ChkVowel
// Description : it is used to check whether the character is vowel
// Input : char
// Output : bool
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0

bool ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || 
        cValue == 'u' || cValue ==  'A' || cValue == 'E' ||
        cValue == 'I' || cValue == 'O' || cValue == 'U') 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}