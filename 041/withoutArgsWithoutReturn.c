
/*
 * 
 * A PROGRAM THAT DEMONSTRATES FUNCTIONS WITH FOLLOWING ASPECTS
 * WITHOUT ARGUMENTS AND WITHOUT RETURN VALUE
 * 
 * 
*/

#include<stdio.h>  
void sum();  

int main() { 

    printf("\n");

    printf("\nWITHOUT ARGUMENTS AND WITHOUT RETURN VALUE :-\n");
    
    printf("\nGoing to Calculate the Sum of Two Numbers :-\n");  
    sum();  
    
    printf("\n\n");

    return 0;

}  

void sum() {  
    
    int a,b;   
    
    printf("\nEnter Two Numbers :- ");  
    scanf("%d %d",&a,&b);   
    
    printf("\n\nThe Sum of %d and %d = %d", a, b, a+b); 
    printf(\n); 
    
}
