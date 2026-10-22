////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print * for the given
//                 number of times
// Input         : Integer
// Output        : Void
// Author        : Sanskruti Sanjay Raut
// Date          : 19/10/2026
//
////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0; 
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d" , &iValue);

    Display(iValue);
    return 0;
}