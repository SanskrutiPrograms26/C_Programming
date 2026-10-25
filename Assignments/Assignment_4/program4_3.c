//////////////////////////////////////////////////////////
//
// Function name : FindGreater
// Description : it is used to find the greater number
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFrist, int iSecond)
{
    if(iFrist > iSecond)
    {
        printf("Frist number is greater");
    }
    else
    {
        printf("Second number is greater");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d" , &iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}