
/*
    Function Name : SquareMeter
    Description   : Converts square feet into square metres
    Input         : Area in square feet
    Output        : Area in square metres
    Author        : Sanskruti
    Date          : 03/11/2026
*/

#include <stdio.h>
#include<stdlib.h>


double SquareMeter(int iValue)
{
    double SqFeet = 1;

     SqFeet = iValue * 0.0929;

    return SqFeet;
}

int main()
{
    int iValue = 1;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metres = %lf\n", dRet);

    return EXIT_SUCCESS;
}

