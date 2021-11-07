
/*
 * 
 * A PROGRAM THAT DEMONSTRATES FUNCTIONS WITH FOLLOWING ASPECTS
 * WITH ARGUMENTS AND WITHOUT RETURN VALUE
 * 
 * 
*/

#include<stdio.h>  
void average(int, int, int, int, int);

int main() {  

    printf("\n");

    int a, b, c, d, e;  

    printf("\nWITH ARGUMENTS AND WITHOUT RETURN VALUE :-\n");
    
    printf("\nGoing to Calculate the Average of Five Numbers :-\n");
 
    printf("\nEnter Five Numbers :- ");  
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);  
    
    average(a,b,c,d,e);  

    printf("\n\n");

    return 0;

}  

void average(int a, int b, int c, int d, int e) {

    float avg;  

    avg = (a+b+c+d+e) / 5;   
    
    printf("\nThe average of given five numbers :- %f",avg);  

} 

