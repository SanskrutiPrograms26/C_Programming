/*
    Function name : RangeSum
    Description   : To return Addition of positive numbers between the range
    Input         : integer (Range)
    Output        : Addition of positive numbers in given range
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

int RangeSum(int iStart , int iEnd)
{
    int iNo = 0;
    int iAns = 0;

    if(iStart > iEnd) 
    {
        printf("Invalid range");
    }
    for(iNo = iStart ; iNo <= iEnd; iNo++)
    {
        if(iNo >= 0)
        {
            iAns = iAns + iNo;
        }
    }
    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    printf("Addition is %d\n",iRet);

    return EXIT_SUCCESS;
}