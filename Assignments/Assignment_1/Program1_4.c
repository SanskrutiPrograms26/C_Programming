////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : It is used to check whether a number is divisible by 5 or not
// Input         : Integer
// Output        : Boolean (TRUE/FALSE)
// Author        : Sanskruti sanjay raut
// Date          : 18/10/2026
//
////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}