
/*

THIS IS A MULTI LINE COMMENT
IN C LANGUAGE

*/

#include<stdio.h>

int main () {

    char first_name[15];
    
    // Message to ask input
    printf("\nWhat is you first name?\n");

    // Accepting input
    scanf("%s", first_name);

    printf("\nvalue of first_name: %s", first_name);
    printf("\n\n");
    
    return 0;

}

