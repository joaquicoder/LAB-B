// SEREÑO, JOAQUI MIGUEL L. DIT1-2

#include <stdio.h>

int main(){//USING LOOPS

    //WHILE LOOP
    printf("\n-While Loop-\n");

    int i = 1;

    while (i < 11){
        printf("%d\n", i);
        i++;
    }

    //FOR LOOP
    printf("\n-For Loop-\n");
    
    int f;

    for(f = 2; f < 22; f += 2){
        printf("%d\n", f);
    }

    //DO/WHILE LOOP
    printf("\n-Do/While Loop-\n");

    int j = 1;
    do {
        printf("%d\n", j);
        j++;
    } while(j < 6);

    return 0;
    
}