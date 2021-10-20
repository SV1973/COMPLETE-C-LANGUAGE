#include<stdio.h>

int main () {

    int number, result;

    printf("\nEnter a Number: ");
    scanf("%d", &number);

    result = number * number * number;

    printf("Cube of %d = %d \n\n", number, result);

}

