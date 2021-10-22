
#include<stdio.h>  

int main() {

    printf("\n");

    int i=1,number=0;    

    printf("\nEnter a number: ");    
    scanf("%d",&number);    

    do{    
        printf("\n%d",(number*i));    
        i++;    
    } while (i<=10);    

    printf("\n\n");

    return 0;  

}

