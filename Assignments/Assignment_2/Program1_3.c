///////////////////////////////////////////////////////////////////
//
// Function name: Display
// Description : it is used to display hello on screen if number 
//   is less than 10 and display Demo if number is greater than 10
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 19/10/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}