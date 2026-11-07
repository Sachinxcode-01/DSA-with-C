#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    // Check for invalid input first
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    } 
    // Else-if ladder checking from highest to lowest
    else if (marks >= 90) {
        printf("Grade: A\n");
    } 
    else if (marks >= 75) {
        printf("Grade: B\n");
    } 
    else if (marks >= 60) {
        printf("Grade: C\n");
    } 
    else if (marks >= 40) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}