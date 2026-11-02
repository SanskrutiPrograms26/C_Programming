/////////////////////////////////////////////////////////////////////////
//
//   Function Name : Number
//   Description   : To print Small ,medium and large numbers
//   Input         : Integer
//   Output        : Small , medium or large number
//   Author        : Sanskruti Sanjay Raut
//   Date          : 01/11/2026
//
//////////////////////////////////////////////////////////////////////////
   
#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Number is medium");
    }
    else
    {
        printf("Number is large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}