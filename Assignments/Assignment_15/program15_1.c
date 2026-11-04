/*
    Description   : Accepts and displays the full name of the user.
    Input         : Character array 
    Output        : Displays the full name.
    Author        : Sanskruti
    Date          : 04/11/2026
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[40];

    printf("plese enter full name : ");
    scanf("%[^\n]s", Name);

    printf("Your Name is %s\n",Name);

    return EXIT_SUCCESS;
}