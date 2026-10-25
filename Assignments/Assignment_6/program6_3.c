////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : It is used to calculate the final payable amount after applying discount
// Input         : Float 
// Output        : Void
// Author        : Sanskruti Sanjay raut
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
     
    if(fAmount < 0)
    {
        printf("Invlid");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000)
    {
          fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }
    
    if (fAmount >= 0)
    {
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount :");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}