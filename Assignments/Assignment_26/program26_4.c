/////////////////////////////////////////////////////////////////////////
//
// Function name : Chkspecial
// Description   : used to check whether it is special symbol or not
// Input         : character
// Output        : special symbol or not
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  if((ch >= 33) && (ch <= 42))
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

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return EXIT_SUCCESS;
}