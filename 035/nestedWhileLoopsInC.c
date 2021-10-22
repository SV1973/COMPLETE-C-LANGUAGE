
#include <stdio.h>  

int main() {  

    printf("\n");

    int rows;  // variable declaration  
    int columns; // variable declaration  
    int k = 1; // variable initialization  
    
    printf("\nEnter the number of rows: ");  // input the number of rows.  
    scanf("%d",&rows);  

    printf("\n\nEnter the number of columns: "); // input the number of columns.  
    scanf("%d",&columns);  

    printf("\n");

    // 2-D ARRAY
    int a[rows][columns];
    int i = 1; 

    // outer loop 
    while (i <= rows) {  
        int j = 1;  
        
        // inner loop 
        while(j<=columns) {  
            printf("%d\t",k);  // printing the value of k.  
            k++;   // increment counter  
            j++;  
        } 
        i++;  
        printf("\n\n");  
    }  

    printf("\n\n");

    return 0;

}