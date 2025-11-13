// SEREÑO, JOAQUI MIGUEL L. DIT1-2

#include <stdio.h>
#include <stdbool.h>

int main(){

//DECLARING VARIABLES
    char firstLetter = 'J';
    int myAge = 18;
    float myGrade = 1;
    double myTemperature = 37;
    bool isJollibeeGood = true;
    bool isJollibeeBad = false;

    printf("\n-Declaring Variables-\n");
    printf("The first letter of my name is = ""%c\n", firstLetter);
    printf("My age is = ""%d\n", myAge);
    printf("My wanted grade is = ""%.1f\n", myGrade);
    printf("my temperature score is = ""%lf"" C\n", myTemperature);
    printf("Is Jollibee good = ""%d\n", isJollibeeGood);
    printf("Is Jollibee bad = ""%d\n\n", isJollibeeBad);
    
    return 0;

}