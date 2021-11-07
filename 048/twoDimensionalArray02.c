
#include<stdio.h>  

int main(){

    printf("\n");     
    
    int i = 0, j = 0;    
    int arr[3][3];        
    
    for(i = 0; i < 3; i++){    
        
        for(j = 0; j < 3; j++){    
            
            printf("Enter arr[%d][%d]: ",i,j); 
            scanf("%d", &arr[i][j]);   
        }

        printf("\n");
    }  

    printf("\nPrinting Values of The Matrix :- \n\n");

    for(i = 0; i < 3; i++){    
        
        for(j = 0; j < 3; j++){    
            
            printf("arr[%d][%d] = %d \t",i,j,arr[i][j]);   
        }

        printf("\n");
    }


    printf("\n\n");     
    return 0;  
}