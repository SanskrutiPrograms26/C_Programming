////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description   : it is used to print the given pattern
// Input         : integer
// Output        : #   1   *   #   2   *   #   3   *   #   4   *   #   5   *  
// Auhtor        : Sanskruti Sanjay Raut
// Date          : 10/11/2026
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t", i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;

}