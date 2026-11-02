//////////////////////////////////////////////////////////////////
//
// Function name : Factorial
// Descrition    : used to print factorial
// Input         : integer
// Output        : Factorial
// Date          : 01/11/2026
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iFact * iCnt;
  }
  printf("%d\n",iFact);
  
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Factorial(iValue);

    return EXIT_SUCCESS;
}