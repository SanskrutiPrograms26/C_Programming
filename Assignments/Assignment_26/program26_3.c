/////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : used to display all uppercase and lowercase charcters
//                 till Z
// Input         : Character
// Output        : alphabets till Z
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
        while(ch <= 122)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if((ch >= 65) && (ch <= 90))
    {
        while(ch <= 90)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else
    {
        printf("%c");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the charcter : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}