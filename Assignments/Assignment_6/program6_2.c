////////////////////////////////////////////////////////////////
// 
// function name : CheckAdmission
// description : it is use to check admission eligiblity
// Input : float, integer
// output : eligiblity
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks , int iAge)
{
    if((fMarks < 0) && (iAge < 0))
    {
        printf("Invalid input");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission");
    }
    else 
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;

    int iAge = 0;

    printf("Enter your Marks & Age: ");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks, iAge);
    
    return EXIT_SUCCESS;
}