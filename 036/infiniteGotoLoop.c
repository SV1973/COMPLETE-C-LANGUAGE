
#include <stdio.h>  

int main() {  

    printf("\n");
    
    infinite_loop:
        printf("Hello!");

    goto infinite_loop; 

    printf("\n\n");
    
    return 0;  
     
} 