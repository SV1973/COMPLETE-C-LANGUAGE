#include<stdio.h>
typedef enum{true, false}b;

int main () {
    
    printf("\n");

    b bool_var = true;

    if (bool_var == true) {
        printf("The value of bool_var is true.");
    } else {
        printf("The value of bool_var is false.");
    }

    printf("\n\n");
    
    return 0;

}