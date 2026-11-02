///////////////////////////////////////////////////////////////////////
//
// Function name : OddDisplay
// Description : it is used to display odd numbers up to N
// Input : 18
// Output : 1  3  5  7  9  11  13  15  17
// Author : Sanskruti Sanjay Raut
// Date : 31/10/2026
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1 ; iCnt <= iNo; iCnt++)
  {
    if((iCnt % 2) != 0)
    {
        printf("%d\t",iCnt);
    }
  }
  printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}