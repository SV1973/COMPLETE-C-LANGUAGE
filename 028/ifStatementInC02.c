
#include<stdio.h>

int main() {
    
    printf("\n");

    int n1, n2, n3;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        printf("\nn1: %d is the Greatest!", n1);
    }
    
    if (n2 > n1 && n2 > n3) {
        printf("\nn2: %d is the Greatest!", n2);
    }
    
    if (n3 > n1 && n3 > n1) {
        printf("\nn3: %d is the Greatest!", n3);
    }
    
    if (n1 == n2 && n1 == n3) {
        printf("\nn1, n2 and n3 are all equal with value: %d", n1);
    }

    printf("\n\n");
    
    return 0;

}