///////////////////////////////////////////////////////////
//
// Function name : ChkVotingEligiblity
// Description : It is used to check voting eligiblity
// Input : integer
// Output: void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ChkVotingEligiblity(int iAge)
{
    if(iAge < 0)
    {
         printf("Invalid age");
    }
    else if(iAge >= 18)
    {
       printf("Eligible for voting"); 
    }
    else
    {
       printf("Not eligible for voting");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d",&iAge);

    ChkVotingEligiblity(iAge);

    return EXIT_SUCCESS;
}