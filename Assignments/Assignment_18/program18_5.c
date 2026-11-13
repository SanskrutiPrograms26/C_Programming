////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description   : it is used to print the given pattern
// Input         : integer
// Output        : 1   2   3   4           
//                 1   *   *   4        
//                 1   *   *   4      
//                 1   2   3   4       
// Auhtor        : Sanskruti Sanjay Raut
// Date          : 10/11/2026
//
////////////////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0 ;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(( i == 1) || (i == iRow)) 
            {
                printf("%d\t",j);
            }
            else if((j == 1) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
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