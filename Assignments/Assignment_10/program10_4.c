/*
    Function Name : FhtoCs
    Description   : To convert temperature from Fahrenheit
                    into Celsius.
    Input         : Temperature in Fahrenheit 
    Output        : Returns temperature in Celsius.
    Author        : Sanskruti
    Date          : 02/11/2026
*/
#include <stdio.h>
#include <stdlib.h>

double FhtoCs(float fTemp)
{
    double fCelsius = 0.0f;

    fCelsius = (fTemp - 32) * (5.0f / 9.0f);

    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %f\n", dRet);

    return EXIT_SUCCESS;
}
