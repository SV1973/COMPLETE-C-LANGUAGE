#include<stdio.h>

int main () {
    

    // INTEGERS

    int num1 = 55;
    int num2 = -10;

    printf("\n\nFormat Specifier :- d ");
    printf("\nValue of num1 is: %d", num1);  
    printf("\n\n\nFormat Specifier :- d");
    printf("\nValue of num2 is: %d", num2); 

    printf("\n\n\nFormat Specifier :- u");
    printf("\nValue of num1 is: %u", num1); 
    printf("\n\n\nFormat Specifier :- u");
    printf("\nValue of num2 is: %u", num2);


    // OCTALS

    int octal_num = 0100;

    printf("\n\n\nFormat Specifier :- o");
    printf("\nOctal Value of  octalNum is: %o", octal_num); 
    printf("\n\n\nFormat Specifier :- d");
    printf("\nInteger Value of octalNum is: %d", octal_num);


    // HEX

    int hex_variable = 0xA;

    printf("\n\n\nFormat Specifier :- x");
    printf("\nOctal Value of  hexVariable is: %x", hex_variable); 
    printf("\n\n\nFormat Specifier :- X");
    printf("\nOctal Value of  hexVariable is: %X", hex_variable); 
    printf("\n\n\nFormat Specifier :- d");
    printf("\nInteger Value of hexVariable is: %d", hex_variable);


    // FLOAT 

    float PI = 3.14;

    printf("\n\n\nFormat Specifier :- f");
    printf("\nValue of PI is: %f", PI);


    // EXPONENTIAL

    double num3 = 34;

    printf("\n\n\nFormat Specifier :- e");
    printf("\nValue of num3 is: %e", num3);
    printf("\n\n\nFormat Specifier :- E");
    printf("\nValue of num3 is: %E", num3);


    // DECIMAL FLOATING-POINT

    float decimal_floating_point = 4.5;
    
    printf("\n\n\nFormat Specifier :- g");
    printf("\nValue of decimal_floating_point is: %g", decimal_floating_point);


    // ADDRESS

    printf("\n\n\nFormat Specifier :- p");
    printf("\nValue of Address of decimal_floating_point is: %p", &decimal_floating_point);


    // CHAR

    char c = 'A';

    printf("\n\n\nFormat Specifier :- c");
    printf("\nValue of c is: %c", c);


    // CHAR

    char full_name[50] = "Shrinivas Vishnupurikar";

    printf("\n\n\nFormat Specifier :- s");
    printf("\nValue of c is: %s", full_name);

    printf("\n\n\n");
    

    return 0;

}