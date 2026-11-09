#include <stdio.h>

int main() {
    int area, length, width;
    
    printf("Enter Length of Rectangle: ");
    scanf("%d", &length);

    printf("Enter Width of Rectangle: ");
    scanf("%d", &width);

    area = length * width;
    
    // Added the missing print statement to display the result
    printf("Area of Rectangle = %d\n", area);

    return 0;
}