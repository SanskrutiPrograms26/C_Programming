/////////////////////////////////////////////////////////////////
//
// Function Name  : Table
//  Description   : To print the table of a number in reverse order
//  Input         : Integer
//  Output        : Multiplication table in reverse order
//  Author        : Sanskruti Sanjay Raut
//  Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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