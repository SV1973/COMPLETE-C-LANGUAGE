
#include <stdio.h>  

int main() {  

    printf("\n");
    
    char ch;  
    
    while(1) {

        printf("\nEnter a Character: ");  
        
        ch=getchar();  
        
        if(ch=='n') {  
            break;  
        }  
        
        printf("\nhello");  
    }  

    printf("\n\n");
    
    return 0;  
    
}