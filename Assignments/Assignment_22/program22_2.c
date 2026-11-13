////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description   : it is used to print the given pattern
// Input         : integer
// Output        : 5   #   4   #   3   #   2   #   1   #  
// Auhtor        : Sanskruti Sanjay Raut
// Date          : 10/11/2026
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1;i--)
    {
        printf("%d\t#\t", i);
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