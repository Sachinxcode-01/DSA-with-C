/**
 * ============================================================================
 * Topic       : Increment and Decrement Operators
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-01/DSA-with-C
 * Description : Demonstrates increment (++) and decrement (--) operators in C,
 *               both pre- and post-forms, which increase or decrease a variable
 *               by 1 in either the original or subsequent expressions.
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Variable Declaration & Initialization
    int a = 5;

    // 1. Post-increment (++): Returns original value, then increments
    printf("Post-increment: %d\n", a++);
    printf("After post-increment: %d\n", a);

    // 2. Pre-increment (++): Increments first, then returns the new value
    printf("Pre-increment: %d\n", ++a);
    printf("After pre-increment: %d\n", a);

    return 0;
}