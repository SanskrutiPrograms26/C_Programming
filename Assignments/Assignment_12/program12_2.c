/*
    Function name : ChkZero
    Description   : check whether it contains zero or not
    Input         : integer 
    Output        : boolean true or false
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

   bRet =  ChkZero(iValue);

   if(bRet == TRUE)
   {
    printf("It contains zero");
   }
   else
   {
    printf("There is no zero");
   }

    return EXIT_SUCCESS;

}