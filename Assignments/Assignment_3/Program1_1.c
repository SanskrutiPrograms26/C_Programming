/////////////////////////////////////////////////////////////////////////
// 
// question : accept one number from user and print that number of 
// even numbers on screen
// Function name : PrintEven
// Description : it is use to print given number of even numbers on screen
// Input : integer
// Output : integer
// Author : Sanskruti Sanjay Raut
// Date : 19/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
     
    int iCnt = 1;    // initialize counter

    while(iCnt <= iNo)  // repeats the loop iNo times
    {
        printf("%d ", iCnt * 2); // prints even number
        iCnt++; // increases the counter by 1
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
