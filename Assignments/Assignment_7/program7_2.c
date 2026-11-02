/////////////////////////////////////////////////////////////
//
// Function name : Display
// Description : it is used to display numbers
// Input : 8
// Output : 1  2  3  4  5  6  7  8
// Author : Sanskruti Sanjay Raut
// Date : 31/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
 
void Display(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo ; iCnt++)
   {
    printf("%d\t",iCnt);
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}