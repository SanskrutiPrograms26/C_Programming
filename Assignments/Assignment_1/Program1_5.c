////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : It is used to print '*' multiple times
// Input         : Integer
// Output        : Void
// Author        : Sanskruti sanjay raut
// Date          : 18/10/2026
//
////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}