/////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : used to display uppercase in lowercase and lowercase in uppercase
// Input         : Character
// Output        : alphabet
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 97) && (ch <= 122))
    {
       ch = ch - 32;
       printf("%c",ch);
    }
    else if((ch >= 65) && (ch <= 90))
    {
       ch = ch + 32;
       printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}