#include <stdio.h>  
#include <stdlib.h> 
struct array getarray(); 

struct array {  
    int arr[8];  
};

int main() {  
    
    struct array x = getarray();  
    
    printf("\nElements that you have entered are :- \n");  
    
    for(int i = 0; x.arr[i] != '\0'; i++) {   
        printf("\n%d ", x.arr[i]);
    }  

    printf("\n");

    return 0;  
}

struct array getarray() {  
    
    struct array y;    
    
    for(int i=0;i<8;i++) {  
        printf("\n\nEnter the Element[%d] :- n\n", i); 
        scanf("%d",&y.arr[i]);   
    }  

    return y;  
}  

