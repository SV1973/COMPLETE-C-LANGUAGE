#include<stdio.h>

int main () {
    
    printf("\n");

    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("\nYou are Eligible for Voting!") : printf("\nYou are Not Eligible for Voting!");

    printf("\n\n");
    
    return 0;

}