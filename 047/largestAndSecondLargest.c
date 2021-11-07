
#include<stdio.h>  

int main () {  

    int arr[100],i,n,largest,sec_largest;  
    
    printf("\nEnter the size of the array :- ");  
    scanf("%d",&n);  
      
    for(i = 0; i < n; i++) {  
        printf("\nEnter arr[%d]: ", i);
        scanf("%d",&arr[i]);  
    }  
    
    largest = arr[0];  
    sec_largest = arr[1];  
    
    for(i = 0; i < n; i++) {  

        if(arr[i]>largest) {  
            sec_largest = largest;  
            largest = arr[i];  
        }  

        else if (arr[i]>sec_largest && arr[i]!=largest) {  
            sec_largest=arr[i];  
        }  
    }  

    printf("\nLargest = %d, Second Largest = %d",largest,sec_largest);  

    printf("\n\n");
      
    return 0;
}  