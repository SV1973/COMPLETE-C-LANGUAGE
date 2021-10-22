
#include<stdio.h>  

int main() {    

    printf("\n");

    int i = 1, number = 0;    

    printf("Enter a number: ");    
    scanf("%d",&number);    

    while(i<=10){    
        printf("\n%d",(number*i));    
        i++;    
    }    

    printf("\n\n");

    return 0;  

}

