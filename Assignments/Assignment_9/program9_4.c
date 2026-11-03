////////////////////////////////////////////////////////////////////////
//
//    Function Name : EvenFactorial
//   Description   : To calculate the product of even numbers
//                    up to the given number.
//   Input         :  integer 
//   Output        : Returns the product of even numbers.
//    Author        : Sanskruti
//    Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;

    while(iNo > 0)
    {
        if(iNo % 2 == 0)
        {
            iFact = iFact * iNo;
        }
        iNo = iNo - 1;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d\n", iRet);

    return EXIT_SUCCESS;
}