//////////////////////////////////////////////////////////////////////////
//
// Function name : ChkSmall
// Description   : used to check whether it is a Small character or not
// Input         : character
// Output        : Small character or not 
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small character");
    }
    else
    {
        printf("It is not a small character");
    }

    return EXIT_SUCCESS;

}