
#include<stdio.h>

int main() {
    
    printf("\n");

    int number = 0;

    printf("\nEnter a Number: ");
    scanf("%d", &number);

    if (number == 10) {
        printf("\nThe Number You entered is equal to 10");

    } else if (number == 50) {
        printf("\nThe Number You entered is equal to 50");
        
    } else if (number == 100) {
        printf("\nThe Number You entered is equal to 100");
        
    } else {
        printf("\nThe Number You entered is not equal to 10, 50 or 100");
        
    }
    
    printf("\n\n");
    
    return 0;

}