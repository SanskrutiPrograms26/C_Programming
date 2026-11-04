/*
    Function name : RangeSumEven
    Description   : To return Addition of even numbers between the range
    Input         : integer (Range)
    Output        : Addition of even numbers in given range
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iNo = 0;
    int iAns = 0;

    if(iStart > iEnd) 
    {
        printf("Invalid range");
    }
    for(iNo = iStart ; iNo <= iEnd; iNo++)
    {
        if(iNo % 2 == 0)
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

    iRet = RangeSumEven(iValue1 , iValue2);

    printf("Addition is %d\n",iRet);

    return EXIT_SUCCESS;
}