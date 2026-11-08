#include <stdio.h>

int main() {
    int i; // Declared at the top for maximum compiler compatibility
    
    for (i = 1; i <= 10; i++) {
        // Added a space after %d to separate the numbers
        printf("%d ", i); 
    }
    
    // Added a newline at the end so the terminal prompt doesn't stick to the output
    printf("\n"); 
    
    return 0;
}