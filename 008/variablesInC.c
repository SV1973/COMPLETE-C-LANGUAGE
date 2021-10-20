
#include "anotherFile.h"
#include <stdio.h>
void print_values(); 

// global variable
int im_global = 77;

int main() {
    
    // local variables
    int num1 = 83, num2 = 45, num3;

    num3 = 90;

    printf("\nnum1: %d", num1);
    printf("\nnum2: %d", num2);
    printf("\nnum3: %d", num3);

    printf("\n");

    printf("\nglobal variable: %d", im_global);
    printf("\nexternal variable: %d", external_variable);


    print_values();
    print_values();
    print_values();

    printf("\n\n");

    return 0;

}

void print_values() {

    // auto variable
    auto int non_static_variable = 11;

    // static variable
    static int static_variable = 11;

    non_static_variable += 1;
    static_variable += 1;

    printf("\n");
    printf("\nNon-Static Variable: %d \tStatic Variable: %d", non_static_variable, static_variable);

}

