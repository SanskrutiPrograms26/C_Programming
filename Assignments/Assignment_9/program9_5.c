/*
   Function Name : DifferenceFactorial
    Description   : To calculate the difference between
                    even factorial and odd factorial.
    Input         : integer 
    Output        : Returns the difference between even
                    factorial and odd factorial.
    Author        : Sanskruti
    Date          : 02/11/2026
*/
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

int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}