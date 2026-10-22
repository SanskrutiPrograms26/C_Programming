//////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description: it is used to check if given number is 
// even or odd
// Input : integer
// Output : Bool (TRUE/FALSE)
// Author : Sanskruti Sanjay Raut
// Date : 19/10/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}