
////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : It is used to check whether a year is a leap year or not
// Input         : Integer
// Output        : Leap year or Not a leap year
// Author        : Sanskruti Sanjay raut
// Date          : 22/10/2026
//
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
   if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
{
    printf("Leap year");
}
else
{
    printf("Not a leap year");
}
}
int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}