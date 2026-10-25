/////////////////////////////////////////////////////////
// Function name : CheckCharacterType
// Description : It is used to check the character type
// Input : Character
// Output : uppercase , lowercase, digit or special character
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
// 
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ChechCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase alphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase alphabet");
    }
    else if((cValue >= '0' ) && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    ChechCharacterType(cValue);
    
    return EXIT_SUCCESS;
}