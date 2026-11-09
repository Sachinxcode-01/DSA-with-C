#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // Loop from 1 to n, accumulating the sum
    for (int i = 1; i <= n; i++) {
        sum += i;  // Equivalent to sum = sum + i
    }

    printf("Sum = %d\n", sum);

    return 0;
}