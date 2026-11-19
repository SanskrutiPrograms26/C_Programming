//////////////////////////////////////////////////////////////////////////
//
// Function name : ChkChar
// Description   : checks whether the character is present in string or not
// Input         : string
// Output        : character found or not
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
  int i = 0;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
        return TRUE;
    }
    i++;
  }
  return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
    
}