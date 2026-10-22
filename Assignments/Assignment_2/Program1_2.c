//////////////////////////////////////////////////////////////////////
//
// Function name: Display
// Description: it is use to accept one number from user and print *
// Input: integer
// Output: void
// Author : Sanskruti Sanjay Raut
// Date : 19/10/2026
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0 )
    {
        printf(" * ");
        iNo--;
    }
}
int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}