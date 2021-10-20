#include<stdio.h>

int main () {
    
    printf("\n");

    const double PI = 3.14;

    printf("The value of PI constant: %f", PI);

    // Purposely Invoking An Error To Demonstrate
    // CONSTANTS ARE IMMUTABLE

    // to solve error, comment the blow line !
    PI = 55;

    printf("\n\n");
    
    return 0;

}

