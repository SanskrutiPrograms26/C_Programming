//////////////////////////////////////////////////////////////////////////
//
// Function name : ChkAlpha
// Description   : used to check whether it is alphabet or not
// Input         : character
// Output        : alphabet or not
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not character");
    }

    return EXIT_SUCCESS;

}