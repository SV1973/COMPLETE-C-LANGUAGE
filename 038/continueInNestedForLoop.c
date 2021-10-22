
#include<stdio.h>  

int main() {  

    printf("\n");

    int i, j;//initializing a local variable 

    for(i = 1; i <= 3; i++){  

        for(j = 1; j <= 3; j++){  

            if(i == 2 && j == 2){   

                continue;   //will continue loop of j only    
            }    

            printf("%d %d\n",i,j);    
        }    
    }
       
    printf("\n\n");

    return 0;  

} 