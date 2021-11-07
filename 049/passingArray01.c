
/*

We have first created the array arr[] and then we pass this array to the function getarray(). 

The getarray() function prints all the elements of the array arr[].

*/

#include <stdio.h> 
void get_array(int []); 

int main(){

    printf("\n");

    int arr[5]={45,67,34,78,90};  
    
    get_array(arr);  
    
    return 0;  
}

void get_array(int arr[]) {  

    printf("\nElements of array are :- ");  

    for(int i = 0; i < 5; i++) {  
        printf("\n%d", arr[i]);  
    }

    printf("\n\n");
}  

 