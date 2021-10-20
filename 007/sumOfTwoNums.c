#include<stdio.h>

int main () {

    int number1, number2, result;

    printf("\nEnter a Number1 : ");
    scanf("%d", &number1);

    printf("\nEnter a Number2 : ");
    scanf("%d", &number2);

    result = number1 + number2;

    printf("\nSum of %d and %d = %d\n\n", number1, number2, result);

}
