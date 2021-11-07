/*

We have created the variable arr[] as static in getarray() function, which is available throughout the program. 

Therefore, the function getarray() returns the actual memory location of the variable 'arr'.

*/

#include <stdio.h>  
int *getarray();

int main() { 

    int *ptr;  
    ptr = getarray();  
    
    printf("\nElements that you have entered are :- \n");  
    
    for(int i = 0; i < 7; i++) {  
        printf("\n%d ", ptr[i]);  
    }  

    printf("\n");

    return 0;
}

int *getarray() {  
    
    static int arr[7];  
    
    for(int i = 0; i < 7; i++) {  
        printf("\n\nEnter the Element[%d] :- \n", i); 
        scanf("%d",&arr[i]);  
    }  
    
    return arr;  
        
}  