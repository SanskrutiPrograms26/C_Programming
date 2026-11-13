/////////////////////////////////////////////////////////////////////////
// 
// Function name : Pattern
// Description : it is used to print the given pattern
// Input : integer
// Output : 1   2   3   4      
//          4   6   7   8     
//          9   1   2   3 
// Auhtor : Sanskruti Sanjay Raut
// Date : 9/11/2026
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iNum <= 9)
            {
                printf("%d\t",iNum);
            }
            else
            {
                iNum = 1;
                printf("%d\t",iNum);
            }
            iNum++;
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