////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Description   : It is used to calculate and display the grade of a student
// Input         : Float
// Output        : Grade A, Grade B, Grade C, Grade D, Fail or Invalid Marks
// Author        : Sanskruti Sanjay Raut
// Date          : 22/10/2026
//
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks < 0) || (fMarks > 100))
    {
        printf("Invlaid Marks");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60)
    {
        printf("Grade c");
    }
    else if(fMarks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}