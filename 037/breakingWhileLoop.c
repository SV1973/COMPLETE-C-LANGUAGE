#include<stdio.h>  

int main () {  

    printf("\n");
    
    int i = 0;  
    
    while (1) {  
        printf("%d  ",i);  
        i++;  
        if(i == 10)  
            break;   
    }  

    printf("came out of while loop");  

    printf("\n\n");

    return 0;
    
}