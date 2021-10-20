#include<stdio.h>
#define PI 3.14

int main () {
    
    printf("\n");

    printf("The value of PI constant declared as preprocessor: %f", PI);

    // Purposely Invoking An Error To Demonstrate
    // CONSTANTS ARE IMMUTABLE

    // to solve error, comment the blow line !
    PI = 55;

    printf("\n\n");
    
    return 0;

}

