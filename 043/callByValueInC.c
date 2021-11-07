
#include <stdio.h>  
void swap_values(int , int); //prototype of the function   

int main() {  

    printf("\n");

    int a = 10;  
    int b = 20;   
    
    // printing the value of a and b in main  
    printf("\nBefore Swapping the values in Main Function :-\n");
    printf("a = %d, b = %d\n",a ,b);
    
    swap_values(a,b);  
    
    // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20  
    printf("\nAfter Swapping the values in Main Function :-\n"); 
    printf("a = %d, b = %d\n",a ,b);

    printf("\n\n");
}  


void swap_values(int a, int b) {

    int temp;   
    temp = a;  
    a = b;  
    b = temp;  

    // Formal parameters, a = 20, b = 10   
    
    printf("\nAfter Swapping the values in swap_values() function :- \n");
    printf("a = %d, b = %d\n",a ,b);

}