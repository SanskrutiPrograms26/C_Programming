/*
    Function name : MultiFact
    Description   : return multiplication of factors
    Input         : integer 
    Output        : multiplication of factors
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMultiplication = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMultiplication = iMultiplication * iCnt;
        }
    }
    return iMultiplication;
}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iRet =  MultiFact(iValue);

   printf("%d",iRet );
   
    return EXIT_SUCCESS;

}