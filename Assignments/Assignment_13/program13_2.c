/*
    Function name : CountOdd
    Description   : To count frequency of Odd digits in a number
    Input         : integer 
    Output        : frequency of odd Digits
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
     

}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iRet =  CountOdd(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}