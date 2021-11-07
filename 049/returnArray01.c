
/*

getarray() function returns a variable 'arr'. 

{line: 47} It returns a local variable, but it is an illegal memory location to be returned, which is allocated within a function in the stack. 

Since the program control comes back to the main() function, and all the variables in a stack are freed. 

Therefore, we can say that this program is returning memory location, which is already de-allocated, so the output of the program is a segmentation fault.

*/


#include <stdio.h>  
int *get_array();

int main() { 

    printf("\n"); 
    
    // Here, n is declared as a pointer variable
    int *n;  
    
    n = get_array();  
    
    printf("\nElements of array are :");  
    
    for(int i = 0; i < 5; i++) {  
        printf("%d", n[i]);  
    }  

    printf("\n\n"); 
    
    return 0;  
    
}

int *get_array() {  

    int arr[5];  
    printf("Enter the elements in an array : \n");  
    
    for(int i = 0; i < 5; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  

    return arr;

}  