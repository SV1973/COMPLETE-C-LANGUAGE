
#include<stdio.h>

int main () {
    
    printf("\n");

    int marks[] = {34, 45, 56, 67, 78};
    int ages[5];

    ages[0] = 88;
    ages[1] = 99;
    ages[2] = 77;
    ages[3] = 66;
    ages[4] = 54;

    printf("\nPrinting Values of marks[] :- \n");
    for (int i = 0; i < 5; i++) {
        printf("\nmarks[%d]: %d", i, marks[i]);
    }

    printf("\n\n");

    printf("\nPrinting Values of ages[] :- \n");
    for (int i = 0; i < 5; i++) {
        printf("\nages[%d]: %d", i, ages[i]);
    }
    
    
    printf("\n\n");
    return 0;

}