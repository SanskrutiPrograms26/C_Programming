///////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : it is used to display Decimal, octal and hexadecimal values
// Input         : character
// output        : decimal , octal and hexadecimal values
// Author        : Sanskruti Sanjay Raut
// Date          : 16/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal is %d\n",ch);
    printf("Octal is %#o\n",ch);
    printf("Hexadecimal is %#X\n",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;

}