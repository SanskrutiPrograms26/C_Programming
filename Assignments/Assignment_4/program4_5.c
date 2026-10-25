/////////////////////////////////////////////////////////////////////////
//
// Function name : CheckDivisiblity
// Description : it is used to check whather the number is divisible by 5
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisiblity(int iValue)
{
  if(iValue % 5 == 0)
  {
    printf("Divisible by 5");
  }
  else 
  {
    printf("not divisible by 5");
  }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d ",&iValue);

    CheckDivisiblity(iValue);

    return EXIT_SUCCESS;
}