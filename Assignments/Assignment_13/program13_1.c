/*
    Function name : CountEven
    Description   : To count frequency of even numbers in a digit
    Input         : integer 
    Output        : frequency of even numbers
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
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

   iRet =  CountEven(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}