//////////////////////////////////////////////////////////////////////////
//
// Function name : DisplaySchedule
// Description   : used to display schedule according to the division
// Input         : devision
// Output        : Exam time as per division 
// Author        : sanskruti sanjay raut
// Date          : 16/11/2026
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 65)
    {
    printf("Your exam is at 7AM");
    }
    else if(chDiv == 66)
    {
        printf("Your exam is at 8:30AM");
    }
    else if(chDiv == 67)
    {
        printf("Your exam is at 9:20AM");
    }
    else if(chDiv == 68)
    {
        printf("Your exam is at 10:30AM");
    }
    else
    {
        printf("Invalid division");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}