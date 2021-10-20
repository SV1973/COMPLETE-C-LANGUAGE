#include<stdio.h>

int main () {
    
    printf("\n");

    int n1 = 4, n2 = 6;

    printf("\nn1: %d\tn2: %d", n1, n2);
    printf("\n\nBitwise AND Operator: %d", (n1 & n2));
    printf("\nBitwise OR Operator: %d", (n1 | n2));
    printf("\nBitwise EXCLUSIVE OR Operator: %d", (n1 ^ n2));
    printf("\nBitwise Complement Operator: %d", (~n1));
    printf("\nBitwise LEFT SHIFT Operator: %d", (n1 << n2));
    printf("\nBitwise RIGHT SHIFT Operator: %d", (n1 >> n2));

    printf("\n\n");
    
    return 0;

}


