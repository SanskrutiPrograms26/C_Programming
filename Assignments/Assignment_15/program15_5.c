/*
    Function Name : Percentage
    Description   : Calculates the percentage of obtained marks
                    out of total marks.
    Input         : Total marks and obtained marks (float)
    Output        : Returns the calculated percentage.
    Author        : Sanskruti
    Date          : 04/11/2026
*/
#include<stdio.h>
#include<stdlib.h>

float Percentage(float fTotal, float fObtained)
{
    float fPer = 0.0f;

    if(fTotal == 0)
    {
        return 0.0f;
    }

    fPer = (fObtained / fTotal) * 100;

    return fPer;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter total marks : ");
    scanf("%f", &fValue1);

    printf("Enter obtained marks : ");
    scanf("%f", &fValue2);

    fRet = Percentage(fValue1, fValue2);

    printf("Percentage is : %f\n", fRet);

    return EXIT_SUCCESS;
}
