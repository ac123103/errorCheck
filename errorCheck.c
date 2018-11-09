#include <stdio.h>
#include <stdlib.h>
#include "errorcheck.h"

float getLowRange(char grade);

int main()
{
    //ask the user for a letter grade.
    printf("Enter a letter grade A-F: ");

    // store the entered value into a char variable
    char userInput;
    scanf("%c", &userInput);



    //start error checking process.
    if ( errorCheck(userInput) == OK)
    {
        //print success message, show lowest possible score.
        printf("\nSUCCESS: You entered %c \n", userInput);

        printf("Lowest possible score for this letter grade: %.1f", getLowRange(userInput) );
    }
    else
    {
        //print error, you did not give good data
        printf("ERROR: Not a valid entry!");
    }
    return 0;
}
float getLowRange(char grade)
{
    float returnVal;

    switch (grade)
    {
    case 'A':
    case 'a':
        returnVal = 93.9F;
        break;
    case 'B':
    case 'b':
        returnVal = 82.9F;
        break;
    case 'C':
    case 'c':
        returnVal = 72.9F;
        break;
    case 'D':
    case 'd':
        returnVal = 62.9F;
        break;
    case 'F':
    case 'f':
        returnVal = 0.0F;
        break;


    } // end switch

    return returnVal;
}
