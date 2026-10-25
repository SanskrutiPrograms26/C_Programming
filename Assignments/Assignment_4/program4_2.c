/////////////////////////////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Description : it is used to check whether the number is even or odd
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 21/10/2026
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}