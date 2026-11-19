//////////////////////////////////////////////////////////////////////////
//
// Function name : CountWhite
// Description   : used to count no. of white spaces in a string
// Input         : string
// Output        : Number of white spaces
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int i = 0 , iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}