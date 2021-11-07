
/*
 * 
 * A PROGRAM THAT DEMONSTRATES FUNCTIONS WITH FOLLOWING ASPECTS
 * WITHOUT ARGUMENTS AND WITH RETURN VALUE
 * 
 * 
*/

#include<stdio.h>  
int sum();  

int main() {  
    
    printf("\n");
    int result;

    printf("\nWITHOUT ARGUMENTS AND WITH RETURN VALUE :-\n");
    
    printf("\nGoing to Calculate the Sum of Two Numbers :-\n"); 
    
    result = sum();  
    printf("\nResult of Addition :- %d", result);  

    printf("\n\n");
    return 0;

}

int sum() {

    int a,b;   
    
    printf("\nEnter two numbers :- ");  
    scanf("%d %d",&a,&b);  
    
    return a + b;   

}