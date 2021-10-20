#include<stdio.h>
// return_type function_name (argument_list);
int show_var_non_static();
int show_var_static();

int main () {
    
    printf("\n");
    
    printf("\nReturned Value From show_var_non_static(); \n\n");
    printf("Returned Value: %d", show_var_non_static());
    printf("\nReturned Value: %d", show_var_non_static());
    printf("\nReturned Value: %d", show_var_non_static());

    printf("\n\n");

    printf("\nReturned Value From show_var_static(); \n\n");
    printf("Returned Value: %d", show_var_static());
    printf("\nReturned Value: %d", show_var_static());
    printf("\nReturned Value: %d", show_var_static());

    printf("\n");
    
    printf("\n\n");
    
    return 0;

}

int show_var_non_static() {

    int counter = 0;

    counter++;

    return counter;

}

int show_var_static() {

    static int counter = 0;

    counter++;

    return counter;

}






