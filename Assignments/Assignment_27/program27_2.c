///////////////////////////////////////////////////////////////////////
//
// Function name : CountSmall
// Description   : it is used to count small characters
// Input         : string
// output        : number of Small letters
// Author        : Sanskruti Sanjay Raut
// Date          : 16/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 97 ) && (*str <= 122))
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}