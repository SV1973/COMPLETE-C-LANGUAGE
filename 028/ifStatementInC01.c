
#include<stdio.h>

int main() {
    
    printf("\n");

    int number = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("\n%d is an Even Number!", number);
    }

    printf("\n\n");
    
    return 0;

}