
//Fibonacci Series using Recursion
#include<stdio.h>
int fibonacci_series(int);

int main () {

    int n;

    printf("\n");

    printf("Enter the 'th' position number you want see in Fibonacci Series :- ");
    scanf("%d", &n);
    
    printf("%d", fibonacci_series(n));
    
    printf("\n\n");

    return 0;
}

int fibonacci_series(int n) {
    if (n <= 1)
        return n;
    return fibonacci_series(n-1) + fibonacci_series(n-2);
}