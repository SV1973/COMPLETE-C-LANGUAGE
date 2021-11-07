
/*


We have passed the array to the function as a pointer.

The function printarray() prints the elements of an array.

*/

#include <stdio.h>
void print_array(char *);  

int main() {
    printf("\n");
        
    char arr[5]={'A','B','C','D','E'};  
    print_array(arr);  
    return 0;  
}

void print_array(char *arr) {  
    
    printf("Elements of array are :- \n");  
    
    for(int i=0;i<5;i++) {  
        printf("\n%c ", arr[i]);  
    }  
}  