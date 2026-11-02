//////////////////////////////////////////////////////////////////////////
//
// function name : pattern
// Description : it is used to pattern printing
// Input : 3
// output : $  *  $  *   $   *
// Author : Sanskruti sanjay raut
// Date : 31/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
    printf("$\t*\t",iCnt);
  }
  printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}