#include <stdio.h>
#include <stdlib.h> 
int *get_array();

int main()  
{   
    // Here, *ptr is a pointer variable
    int *ptr;  
    
    // ptr holds the address 
    // that is returned from get_array() function.
    ptr = get_array();  
    
    int length = sizeof(*ptr);  
    
    printf("\n\nElements that you have entered are :- ");  
    
    for(int i = 0; ptr[i] != '\0'; i++)  
    {  
        printf("\n%d ", ptr[i]);  
    }  
    
    printf("\n");

    return 0;  
} 

int *get_array()  
{  
    int size;  
    
    printf("\n\nEnter the size of the array :- \n");  
    scanf("%d",&size);  
    
    /*

    “malloc” method in C is used to dynamically allocate a single large block of memory with the specified size.
    It returns a pointer of type void which can be cast into a pointer of any form.
    It doesn’t Iniatialize memory at execution time so that it has initializes each block with the default garbage value initially.

    */  

    int *p = malloc(sizeof(size));
     
    for(int i = 0; i < size; i++) {  
        printf("\nEnter the Element[%d] :- ", i); 
        scanf("%d",&p[i]);  
    }  

    return p;  
}  