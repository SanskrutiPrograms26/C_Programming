//////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayASCII
// Description   : used to display ASCII table
// Input         : None
// Output        : ASCII table 
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("-------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i<= 126)
        {
            printf("%c\t",i);
        }
        else
        {
            printf("  \t");
        }
        printf("%d\t%x\t\t%o\n",i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}