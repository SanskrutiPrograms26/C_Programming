////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description   : it is used to print the given pattern
// Input         : integer
// Output        : A    B    C    D     E   
// Auhtor        : Sanskruti Sanjay Raut
// Date          : 10/11/2026
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++ , ch++)
    {
        printf("%c\t", ch);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;

}