#include<stdio.h>

int main () {
    
    printf("\n");

    int sum = 0, k = 1;

    for(int i = 1; i <= 10; i++ ); {
        sum = sum + k;
        k++;
    }

    printf("The value of variable sum: %d", sum);

    printf("\n\n");
    
    return 0;

}