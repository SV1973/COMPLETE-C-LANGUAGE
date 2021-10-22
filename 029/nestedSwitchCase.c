
#include<stdio.h>  

int main() {  

    printf("\n");

    int i = 10;  
    int j = 20;  
   
    switch(i) {  
     
        case 10:   
            printf("\nThe value of i evaluated in outer switch: %d\n",i);  
        case 20:  
            switch(j) {  
            case 20:  
                printf("\nThe value of j evaluated in nested switch: %d\n",j);  
            }  
    }  
     
    printf("\nExact value of i is : %d\n", i );  
    printf("\nExact value of j is : %d\n", j );  
   
    printf("\n\n");

    return 0;  
}

