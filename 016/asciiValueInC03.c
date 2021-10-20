#include<stdio.h>

int main () {
    
    printf("\n");

    int sum = 0, i;
    char name[20];

    printf("Enter a Name: ");
    scanf("%s", name);

    while (name[i] != '\0'){
        printf("\nThe ASCII Value of the Character %c is %d", name[i], name[i]);
        sum += name[i];
        i++;
    }

    printf("\n\nSum of the ASCII Values of Characters is: %d", sum);
    

    printf("\n\n");
    
    return 0;

}