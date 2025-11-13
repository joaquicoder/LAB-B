// SEREÑO, JOAQUI MIGUEL L. DIT1-2

#include <stdio.h>
#include <math.h>

int main(){

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

    int l,o,e;
    
    l = 550;
    o = 600;
    e = 189;

    printf("First number =  %d\n", l);
    printf("Second number =  %d\n", o);
    printf("Third number = %d\n", e);

    if(l > e && e < o){
        printf("\nThe condition (l > e && e < o) is true\n");
    }

    if(l < o || l < e){
        printf("At least one of the condition (l < o || l < e) is true\n");
    }

    if(!(l > o)){
        printf("550 is not greater than 600\n");
    }

    printf("\n-Using Operators(Assignment)-\n");

    int m;
    int j;

    printf("Enter first number = ");
    scanf("%d", &m);

    printf("Enter second number = ");
    scanf("%d", &j);

    printf("Using m += j: %d\n", m += j);
    printf("Using m -= j: %d\n", m -= j);
    printf("Using m *= j: %d\n", m *= j);
    printf("Using m /= j: %d\n", m /= j);
    printf("Using m %%= j: %d\n", m %= j);


    return 0;
    
}