#include <stdio.h>

// Function declaration
void greet();

// Main function
int main()
{
    printf("Program Started\n");

    // Function call
    greet();

    printf("Program Ended\n");

    return 0;
}

// Function definition
void greet()
{
    printf("Hello! Welcome to C Programming.\n");
}