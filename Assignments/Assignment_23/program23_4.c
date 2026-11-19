///////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayDigit
// Description   : used to display only digits from that string
// Input         : string
// Output        : only digits
// Author        : sanskruti sanjay raut
// Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int i =0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
        i++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}