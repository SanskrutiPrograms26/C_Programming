/////////////////////////////////////////////////////////////////
//
// Function Name  : Table
//  Description   : To print the table of a number
//  Input         : Integer
//  Output        : Multiplication table
//  Author        : Sanskruti Sanjay Raut
//  Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
      printf("%d\t",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}