/*
    Function Name : FhtoCs
    Description   : To convert temperature from Fahrenheit
                    into Celsius.
    Input         : Temperature in Fahrenheit (fTemp).
    Output        : Returns temperature in Celsius.
    Author        : Sanskruti
    Date          : 02/11/2026
*/
#include <stdio.h>
#include <stdlib.h>

float FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = (fTemp - 32) * (5.0f / 9.0f);

    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    fRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %f\n", fRet);

    return EXIT_SUCCESS;
}
