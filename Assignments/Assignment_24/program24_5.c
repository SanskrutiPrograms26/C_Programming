//////////////////////////////////////////////////////////////////////////
//
// Function name : StrRev
// Description   : used to print the string in reverse
// Input         : string
// Output        : reversed string
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int i = 0, j = 0;
    char temp;

    while(str[j] != '\0')
    {
      j++;
    }
    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is : %s",arr);

    return EXIT_SUCCESS;
}