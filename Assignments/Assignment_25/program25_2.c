//////////////////////////////////////////////////////////////////////////
//
// Function name : ChkCapital
// Description   : used to check whether it is a capital character or not
// Input         : character
// Output        : capital or not capital
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }

    return EXIT_SUCCESS;

}