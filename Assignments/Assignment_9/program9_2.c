///////////////////////////////////////////////////////////////////
//
//    Function Name : DollarToINR
//    Description   : To convert US dollars into Indian rupees.
//                    Consider 1 USD = 70 INR.
//    Input         : integer
//    Output        : Returns the amount in Indian rupees.
//    Author        : Sanskruti Sanjay Raut
//    Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iRupees = 0;

    iRupees = (iNo * 70);

    return iRupees;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number in USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return EXIT_SUCCESS;
}