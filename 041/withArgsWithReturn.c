
/*
 * 
 * A PROGRAM THAT DEMONSTRATES FUNCTIONS WITH FOLLOWING ASPECTS
 * WITH ARGUMENTS AND WITH RETURN VALUE
 * 
 * 
*/

#include<stdio.h>  
int check_even_odd(int); 

int main()  
{   
    printf("\n");

    int n,flag=0;  

    printf("\nWITH ARGUMENTS AND WITH RETURN VALUE :-\n");
    
    printf("\nGoing to Check whether a Number is Even or Odd :-\n");
 
    printf("\nEnter a Number :- ");  
    scanf("%d",&n);  
    
    flag = check_even_odd(n);  
    
    if(flag == 0) {  
        printf("\nThe Number %d is Odd!\n", n);  
    }  
    else {  
        printf("\nThe Number %d is Even!\n", n);   
    }  

    printf("\n\n");

    return 0;
}  

int check_even_odd(int n) {  

    if(n%2 == 0) {  
        return 1;  
    }  
    else {  
        return 0;  
    }  

}  
