//////////////////////////////////////////////////////////////////////////
//
// Function name : FristChar
// Description   : used to return index of frist occurence of that character
// Input         : string , character
// Output        : index of character
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FristChar(char *str,char ch)
{
  int i = 0;

  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
        return i;
    }
    i++;
  }
  return -1;
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

    iRet = FristChar(arr,cValue);

    printf("Character frequency is %d",iRet);

    return EXIT_SUCCESS;
    
}