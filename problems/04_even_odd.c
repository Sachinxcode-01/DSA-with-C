#include <stdio.h>

int main() {
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    // Check if the remainder of num divided by 2 is exactly 0
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}