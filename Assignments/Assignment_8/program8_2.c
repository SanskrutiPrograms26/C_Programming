///////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : to display a number as string
// Input         : Integer
// Output        : String
// Author        : Sanskruti Sanjay Raut
// Date          : 01/11/2026
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    char *Arr[] = { "zero" , "one" , "two", "three", "four" , "five" , "six" , 
                   "seven", "eight", "nine" };
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 10) 
    {
        printf("%s\n",Arr[iNo]);
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Digit : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}