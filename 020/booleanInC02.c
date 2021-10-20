#include<stdio.h>
#include<stdbool.h>

int main () {
    
    printf("\n");

    bool boolean_array[5] = {true, false, true, false, false};

    for (int i = 0; i < 5; i++) {
        printf("\nElement [%d]: %d", i, boolean_array[i]);
    }
    
    printf("\n\n");
    
    return 0;

}