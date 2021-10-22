
#include<stdio.h>  

int main() { 

    int number = 0;

    printf("\n");

    printf("Enter a Number: ");    
    scanf("%d",&number);    

    switch(number){    
        case 10:    
        printf("\nThe Number You Entered is Equals to 10");    
        break;    
        
        case 50:    
        printf("\nThe Number You Entered is Equals to 50");    
        break;    
        
        case 100:    
        printf("\nThe Number You Entered is Equals to 100");    
        break;    
        
        default:    
        printf("\nThe Number You Entered is Not Equals to 10, 50 or 100");    
    }    

    printf("\n\n");

    return 0; 

} 