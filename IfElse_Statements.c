// SEREÑO, JOAQUI MIGUEL L. DIT1-2

#include <stdio.h>

int main(){

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

    return 0;
    
}