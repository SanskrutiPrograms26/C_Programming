////////////////////////////////////////////////////////
//
// Function name : DisplayFactor
// Description : it is used to display event factors
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0)&&(i % 2 == 0))
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}