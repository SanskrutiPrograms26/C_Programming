/*
    Function name : RangeDisplayEven
    Description   : To display even numbers between the range
    Input         : integer (Range)
    Output        : even numbers in given range
    Author        : Sanskruti Sanjay Raut
    Date          : 3/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iNo = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

   for(iNo = iStart ; iNo <= iEnd; iNo++)
   {
    if(iNo % 2 == 0)
    {
      printf("%d\n",iNo);
    }
    
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

    return EXIT_SUCCESS;
}