// SEREÑO, JOAQUI MIGUEL L. DIT1-2

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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
    printf("Is Jollibee bad = ""%d\n", isJollibeeBad);

//USING OPERATORS
    float f1,f2,sum,diff,pro,quo,rem,inc,dec;

    f1 = 10;
    f2 = 20;
    sum = f1 + f2;
    diff = f1 - f2;
    pro = f1 * f2;
    quo = f1 / f2;
    rem = fmod(f1, f2);
    inc = 10;
    dec = 20;
    inc++;
    dec--;

    printf("\n-Using Operators(Arithmetic)-\n");

    printf("First number = ""%.3f\n", f1);
    printf("Second number = ""%.3f\n", f2);
    
    printf("\nThe sum of %.3f and %.3f is %.3f\n", f1, f2, sum);
    printf("The difference of %.3f and %.3f is %.3f\n", f1, f2, diff);
    printf("The product of %.3f and %.3f is %.3f\n", f1, f2, pro);
    printf("The quotient of %.3f and %.3f is %.3f\n", f1, f2, quo);
    printf("The remainder of %.3f and %.3f is %.3f\n", f1, f2, rem);
    printf("The increment of 10.00 is %.2f\n", inc);
    printf("The decrement of 20.00 is %.2f\n", dec);

    printf("\n-Using Operators(Logical)-\n");

    int a,b,c,and,or,not;

    a = 30;
    b = 5;
    c = 17;
    and = a > b && c < a;
    or = a < b || c > a;
    not = !(a < b || c > a);
   
    printf("First expression is 30 > 5\n");
    printf("Second expression is 17 < 30\n");

    printf("\nThe result of (30 > 5 && 17 < 30) is %d", and);
    printf("\nThe result of (30 < 5 || 17 > 30) is %d", or);
    printf("\nThe result of !(30 < 5 || 17 > 30) is %d\n", not);

    //USING LOOPS

    printf("\n-While Loop-\n");

    int i = 1;

    while (i < 11){
        printf("%d\n", i);
        i++;
    }

    printf("\n-For Loop-\n");
    
    int f;

    for(f = 2; f < 21; f++){
        printf("%d\n", f);
    }

    printf("\n-Do/While Loop-\n");

    int j = 1;
    do {
        printf("%d\n", j);
        j++;
    } while(j < 6);

    //USING IF-ELSE STATEMENTS
    printf("\n-Using If-Else Statements-\n");
    
    int one;

    printf("Enter a number = ");
    scanf("%d", &one);

    if (one % 2 == 0){
        printf("The number is even", one);
    } else{
        printf("The number is odd\n", one);
    }

    //FINISH

   







}