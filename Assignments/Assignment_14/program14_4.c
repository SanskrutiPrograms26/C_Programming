/*
    Function name : SumNonFact
    Description   : return Summation Non factors of a number
    Input         : integer 
    Output        : summation of non factors
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);
   
    return EXIT_SUCCESS;

}