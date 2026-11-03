///////////////////////////////////////////////////////////////////
//
//    Function Name : OddFactorial
//    Description   : To calculate the product of odd numbers
//                    up to the given number.
//    Input         : integer 
//    Output        : Returns the product of odd numbers.
//    Author        : Sanskruti Sanjay Raut
//    Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    
    while(iNo > 0)
    {
        if(iNo % 2 != 0)
        {
          iFact = iFact * iNo;
        }

        iNo = iNo - 2;
    }

    return iFact;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d\n", iRet);

    return EXIT_SUCCESS;
}