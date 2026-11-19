//////////////////////////////////////////////////////////////////////////
//
// Function name : CountChar
// Description   : used to count characters in a string
// Input         : string , character
// Output        : frequency of character
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{
  int i = 0 , iCount = 0;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
        iCount++;
    }
    i++;
  }
  return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);

    return EXIT_SUCCESS;
    
}