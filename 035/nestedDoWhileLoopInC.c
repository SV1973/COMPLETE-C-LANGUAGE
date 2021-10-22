
#include <stdio.h>  

int main() {  

    printf("\n");

    /*printing the pattern 
        ******** 
        ******** 
        ******** 
        ******** */  
    int i=1;  

    // outer loop  
    do { 
        int j = 1;  

        // inner loop    
        do {  
            printf("*");  
            j++; 

        } while (j <= 8); 

        printf("\n");  
        i++;  

    } while (i <= 4); 

    printf("\n\n");

    return 0;
    
}