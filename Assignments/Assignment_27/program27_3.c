///////////////////////////////////////////////////////////////////////
//
// Function name : Difference
// Description   : It returns difference between small and capital characters
// Input         : String
// Output        : Difference between small and capital characters
// Author        : Sanskruti Sanjay Raut
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iSmall++;
        }
        else if((*str >= 65) && (*str <= 90))
        {
            iCapital++;
        }
        str++;
    }
    return (iSmall - iCapital);

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}