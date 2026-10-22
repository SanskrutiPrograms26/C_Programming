////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print numbers from 5 to 1
// Input         : Void
// Output        : Void
// Author        : Sanskruti sanjay raut
// Date          : 18/10/2026
//
////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
       while(i >= 1)
       {
        printf("%d ",i);
        i--;
       }
}
int main()
{
    Display();

    return 0;
}