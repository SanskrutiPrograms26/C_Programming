/*
    Function Name : Multiply
    Description   : Multiplies three given numbers.
    Input         : Three integers (iNo1, iNo2, iNo3)
    Output        : Returns the multiplication of three numbers.
    Author        : Sanskruti
    Date          : 04/11/2026
*/
#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2 , int iNo3)
{
    int iMult = 0;

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}