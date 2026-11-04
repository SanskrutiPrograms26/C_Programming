/*
    Function name : CountRange
    Description   : To count Range of digits in between 3 & 7
    Input         : integer 
    Output        : count of digits between 3 & 7
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit <= 7) && (iDigit >= 3))
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

   iRet =  CountRange(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}