/*
    Function Name : KMToMeter
    Description   : To convert distance from kilometres
                    into metres.
    Input         : Distance in kilometres (iNo).
    Output        : Returns distance in metres.
    Author        : Sanskruti
    Date          : 02/11/2026
*/
#include <stdio.h>
#include <stdlib.h>

int KMToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM : ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meters is : %d\n", iRet);

    return EXIT_SUCCESS;
}
