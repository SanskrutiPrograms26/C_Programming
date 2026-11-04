/*
    Function name : NonFact
    Description   : print Non factors of a number
    Input         : integer 
    Output        : nun factors
    Author        : Sanskruti Sanjay Raut
    Date          : 4/11/2026
*/

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);
   
    return EXIT_SUCCESS;

}