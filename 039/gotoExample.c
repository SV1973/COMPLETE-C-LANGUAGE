
#include<stdio.h>  

int main() {  

    printf("\n");
    
    int num,i=1;   
    
    printf("\nEnter the number whose table you want to print: ");   
    scanf("%d",&num);  
    
    printf("\n");
    
    table:   
    printf("%d x %d = %d\n",num,i,num*i);  
    i++;  
    
    if(i<=10){
        goto table; 
    }   

    printf("\n\n");
    
    return 0;
    
}  