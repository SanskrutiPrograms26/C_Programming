///////////////////////////////////////////////////////////////////////////
//
// Function name : strlwrx
// Description   : use to convert uppercase letters in lowercase
// Input         : string
// Output        : modified string in lowercase
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is %s" , arr);

    return EXIT_SUCCESS;
}