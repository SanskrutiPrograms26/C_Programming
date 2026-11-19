//////////////////////////////////////////////////////////////////////////
//
// Function name : LastChar
// Description   : used to return index of Last occurence of that character
// Input         : string , character
// Output        : index of character
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
  int i = 0 ;
  int iPos = -1;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
        iPos = i + 1;
    }
    i++;
  }
  if(iPos != -1)
  {
    iPos = i - iPos;
  }
  return iPos;
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

    iRet = LastChar(arr,cValue);

    printf("Charcter Location is %d",iRet);

    return EXIT_SUCCESS;
    
}