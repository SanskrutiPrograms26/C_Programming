///////////////////////////////////////////////////////////////////////
//
// Function name : CountCapital
// Description   : it is used to count capital characters
// Input         : String
// output        : number of capital letters
// Author        : Sanskruti Sanjay Raut
// Date          : 16/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}