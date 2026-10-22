///////////////////////////////////////////////////////////
//
//Function name : DisplayConvert
// Description : it is used to convert a character's case
// Input : char
// Output : char
// Author: Sanskruti Sanjay Raut
// Date : 22/10/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

char DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c" , &cValue);

    DisplayConvert(cValue);

    return 0;
}