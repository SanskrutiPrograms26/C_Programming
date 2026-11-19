///////////////////////////////////////////////////////////////////////////
//
// Function name : struprx
// Description   : use to convert lowercase letters in uppercase
// Input         : string
// Output        : modified string in uppercase
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is %s" , arr);

    return EXIT_SUCCESS;
}