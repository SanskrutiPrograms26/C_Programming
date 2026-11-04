/*
    Function name : SumDiff
    Description   : to return difference between summation if factor and non factor
    Input         : integer 
    Output        : difference between summation if factor and non factor
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int SumDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
             iSumFact = iSumFact + iCnt;
        }
        else
        {
             iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iDiff = iSumFact - iSumNonFact;
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumDiff(iValue);

    printf("%d\n", iRet);
   
    return EXIT_SUCCESS;

}