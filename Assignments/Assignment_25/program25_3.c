//////////////////////////////////////////////////////////////////////////
//
// Function name : ChkDigit
// Description   : used to check whether it is a digit or not
// Input         : character
// Output        : digit or not
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= 48) && (ch <= 57))
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

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return EXIT_SUCCESS;

}