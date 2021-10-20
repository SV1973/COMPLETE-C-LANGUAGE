
/*

In the following program every smallest individual unit, is a token.

*/

#include<stdio.h>
void greet_user(char *, char *);

int main () {
    
    printf("\n");

    char first_name[20], last_name[20];

    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("\nEnter last name: ");
    scanf("%s", last_name);

    greet_user(first_name, last_name);

    printf("\n\n");
    
    return 0;

}

void greet_user(char *name1, char *name2) {

    printf("\nHello %s %s, It's a Pleasure to Meet You!!!\n", name1, name2);

}