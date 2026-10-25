//////////////////////////////////////////////////////////////////////////
//
// Function name: CheckNumber
// Description : it is used check whether the number is positive,negative
// or zero
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 21/10/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is positive");
    }
    else if(iNo < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}