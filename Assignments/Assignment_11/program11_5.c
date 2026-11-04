/*
    Function name : RangeDisplayRev
    Description : To display numbers between the range in reverse
    Input : integer (Range)
    Output : numbers in reverse order
    Author : Sanskruti Sanjay Raut
    Date : 3/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayRev(int iStart , int iEnd)
{
    int iNo = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

   for(iNo = iEnd ; iNo >= iStart; iNo--)
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

    RangeDisplayRev(iValue1 , iValue2);

    return EXIT_SUCCESS;
}