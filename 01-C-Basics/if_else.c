/**
 * ============================================================================
 * Topic       : if-else Statement (Control Flow)
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-01/DSA-with-C
 * Description : Demonstrates the if-else statement in C, which conditionally
 *               executes one of two blocks of code depending on whether a given
 *               expression evaluates to true or false.
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    //Declaration
    int number;
    printf("Enter a Number :");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even Number!\n");
    } else {
        printf("Odd Number\n");
    }

    return 0;
}