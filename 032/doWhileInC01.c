
#include<stdio.h>  
#include<stdlib.h>  

int main() {  

    printf("\n");

    char c;  
    int choice,dummy;

    do {
        printf("\n1. Print Shrinivas");
        printf("\n2. Print Vishnupurikar");
        printf("\n3. Exit\n");
        printf("\n");

        scanf("%d",&choice); 

        switch(choice) {  
            case 1 :   
            printf("\nShrinivas");   
            break;  
            case 2:    
            printf("\nVishnupurikar");  
            break;  
            case 3:  
            exit(0);   
            break;  
            default:   
            printf("\nPlease Enter Valid Choice");      
        }  

        printf("\n\nDo You Want to Enter More? => ");   
        scanf("%d",&dummy);  
        scanf("%c",&c); 

    } while (c=='y');  

    printf("\n\n");

    return 0;
}


