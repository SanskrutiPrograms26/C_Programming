/////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description : it is used to print the given pattern
// Input : integer
// Output : 4   4   4   4    4   
//          3   3   3   3    3  
//          2   2   2   2    2
//          1   1   1   1    1
// Auhtor : Sanskruti Sanjay Raut
// Date : 9/11/2026
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", i);
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