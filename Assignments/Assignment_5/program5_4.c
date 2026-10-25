//////////////////////////////////////////////////////////
//
// Function name: CheckMultipleDivisiblity
// Description : it is use to check divisiblity
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisiblity(int iValue)
{
   if((iValue % 5 == 0) && (iValue & 3 == 0))
   {
    printf("Divisible by both");
   }
   else if(iValue % 5 == 0)
   {
    printf("Divisible by 5 only");
   }
   else if(iValue % 3 == 0)
   {
    printf("Divisible by 3 only");
   }
   else
   {
    printf("Not Divisible by Either");
   }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    CheckMultipleDivisiblity(iValue);

    return EXIT_SUCCESS;
}