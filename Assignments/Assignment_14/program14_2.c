/*
    Function name :  FactRev
    Description   : print factors in reverse order
    Input         : integer 
    Output        : factors in reverse order
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo-1; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
        printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   FactRev(iValue);
   
    return EXIT_SUCCESS;

}