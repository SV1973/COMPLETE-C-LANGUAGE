
#include<stdio.h>

int main() {
    
    printf("\n");

    int marks;

    printf("\nEnter Your Marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks <= 100 && marks > 85) {
        printf("\nGrade: A,\tMarks: %d", marks);

        } else if (marks <= 85 && marks > 60) {
            printf("\nGrade: B,\tMarks: %d", marks);

        } else if (marks <= 60 && marks > 40) {
            printf("\nGrade: C,\tMarks: %d", marks);

        } else if (marks <= 40 && marks > 30) {
            printf("\nGrade: D,\tMarks: %d", marks);

        } else {
            printf("\nMarks: %d", marks);
            printf("\nYou have Failed. Study Harder Next Time!");
        }

    } else {
        printf("\nEnter Marks Between 0 to 100");

    }
    
    printf("\n\n");
    
    return 0;

}