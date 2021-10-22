
#include<stdio.h>  

int main() {

    printf("\n");

    int x = 10, y = 5; 

    // Here the expression evaluates to a boolean value.

    switch ((x > y) && (x+y > 0)) {  
        case 1:   
        printf("\nHi !");  
        break;   
        
        case 0:   
        printf("\nBye !");  
        break;  
        
        default:   
            printf("\nThis is Default Statement.");  
    }   

    printf("\n\n");

    return 0;
          
}