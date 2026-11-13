/////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description : it is used to print the given pattern
// Input : integer
// Output : 2   4   6   8      
//          1   3   5   7     
//          10  12  14  16 
// Auhtor : Sanskruti Sanjay Raut
// Date : 9/11/2026
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    int iNum1 = 2, iNum2 = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if((i % 2) != 0)
           {
            printf("%d\t",iNum1);
            iNum1 = iNum1 + 2;
           }
           else
           {
            printf("%d\t",iNum2);
            iNum2 = iNum2 + 2;
           }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

   printf("Enter number of rows : ");
   scanf("%d",&iValue1);

   printf("Enter number of columns : ");
   scanf("%d",&iValue2);

   pattern(iValue1,iValue2);

   return EXIT_SUCCESS;
}