/*
    Function name : RangeDisplay
    Description : To display numbers between the range
    Input : integer (Range)
    Output : numbers in given range
    Author : Sanskruti Sanjay Raut
    Date : 3/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart , int iEnd)
{
    int iNo = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

   for(iNo = iStart ; iNo <= iEnd; iNo++)
   {
    printf("%d\n",iNo);
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);

    return EXIT_SUCCESS;
}