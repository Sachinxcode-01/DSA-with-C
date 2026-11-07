#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is greater than 0
    if (num > 0) {
        printf("%d is Positive\n", num);
    } 
    // Check if the number is less than 0
    else if (num < 0) {
        printf("%d is Negative\n", num);
    } 
    // If neither, it must be 0
    else {
        printf("The number is Zero\n");
    }

    return 0;
}