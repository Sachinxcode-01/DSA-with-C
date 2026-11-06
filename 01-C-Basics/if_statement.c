/**
 * ============================================================================
 * Topic       : if Statement (Control Flow)
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-01/DSA-with-C
 * Description : Demonstrates the if statement in C, which conditionally
 *               executes a block of code only when a given expression
 *               evaluates to true (non-zero).
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Variable Declaration & Initialization
    int age = 20;

    if (age >= 18) {
        printf("You Are Eligible to Vote..!\n");
    }

    return 0;
}