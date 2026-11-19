/////////////////////////////////////////////////////////////////////
//
// Function name : Reverse
// Description   : It is used to reverse the given string
// Input         : String
// Output        : Reversed string
// Author        : Sanskruti Sanjay Raut
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
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

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reversed string is %s",arr);

    return EXIT_SUCCESS;
}