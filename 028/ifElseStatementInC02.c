
#include<stdio.h>

int main() {
    
    printf("\n");

    int age ;

    printf("\nEnter Your Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\nYou are Eligible for Voting!");
    } else {
        printf("\nYou are Not Eligible for Voting!");
    }

    printf("\n\n");
    
    return 0;

}


