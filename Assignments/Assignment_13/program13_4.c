/*
    Function name : MutiDigits
    Description   : To return multiplication of all digits
    Input         : integer 
    Output        : multiplication
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int MultiDigits(int iNo)
{
    int iMultiplication = 1;
    int iDigit = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMultiplication = iMultiplication * iDigit;

        iNo = iNo / 10;
    }
    return iMultiplication;
     

}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iRet =  MultiDigits(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}