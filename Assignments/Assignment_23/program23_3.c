///////////////////////////////////////////////////////////////////////////
//
// Function name : strtogglex
// Description   : used to toggle the uppercase into lowercase and lowercase into uppercase
// Input         : string
// Output        : modified string 
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else
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

    strtogglex(arr);

    printf("Modified string is %s" , arr);

    return EXIT_SUCCESS;
}