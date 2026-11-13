////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description   : it is used to print the given pattern
// Input         : integer
// Output        : 2   4   6   8   10   12  
// Auhtor        : Sanskruti Sanjay Raut
// Date          : 10/11/2026
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;
    int iCnt = 0;

    for(i = 1 , iCnt = 1; iCnt <= iNo ;iCnt++ , i++)
    {
        printf("%d\t", i * 2);
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