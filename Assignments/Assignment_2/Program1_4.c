////////////////////////////////////////////////////////////////////////////
//
// question : Accept two numbers from user and display frist number
//  in second number of times
// Function name : Display
// Description : it is use to display frist number in second number of times
// Input : integer
// output : void
// Author : Sanskruti Sanjay Raut
// Date : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue , iCount);

    return 0;
}