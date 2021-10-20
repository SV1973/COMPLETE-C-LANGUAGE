#include<stdio.h>

int main () {
    
    printf("\n");

    const float PI = 3.14, another_float = 5.83 ;
    float sum;
    const float huge_num = +5.67e8; // 3 ^ 8

    printf("\nPI: %f", PI);
    printf("\nAnother Float: %f", another_float);

    sum = PI + another_float;

    printf("\n\nSum of PI and Another Float: %f", sum);


    printf("\n\nDisplaying an Float Literal in Exponential Form: %f", huge_num);

    printf("\n\n");
    
    return 0;

}

