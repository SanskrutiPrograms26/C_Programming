/////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description : it is used to print the given pattern
// Input : integer
// Output : A   B   C   D
//          a   b   c   d  
//          A   B   C   D
//          a   b   c   d 
// Auhtor : Sanskruti Sanjay Raut
// Date : 9/11/2026
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 , ch = 'A'; j <= iCol; j++, ch++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t" , ch + 32);  // A + 32 = 65 + 32 = 97 = a
            }
            else
            {
                printf("%c\t" , ch);
            }
        }
        printf("\n\n");
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows : ");
    scanf("%d" , &iValue1);

    printf("Enter Number of columns : ");
    scanf("%d" , &iValue2);

    pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}