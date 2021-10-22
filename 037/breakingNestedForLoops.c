
#include<stdio.h>  

int main() {  

    printf("\n");
    
    int i, j;//initializing a local variable    
    
    for(i = 1; i <= 3; i++){      
    
        for(j = 1; j <= 3; j++){    
            printf("%d %d\n",i,j);

            if(i==2 && j==2){    
                break;//will break loop of j only    

            }    
        }//end of for loop    
    }

    printf("\n\n");

    return 0;  
    
}