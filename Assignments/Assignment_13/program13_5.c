/*
    Function name : CountDiff
    Description   : return difference between summation of even and odd digits
    Input         : integer 
    Output        : differnce between summation of even and odd digits
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iSum1 = 0;
    int iSum2 = 0;
    int iDigit = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
         else 
        {
             iSum2 = iSum2 + iDigit;
        }
           
         iDiff = iSum1 - iSum2;
        iNo = iNo / 10;
    }
    return iDiff;
     

}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iRet =  CountDiff(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}