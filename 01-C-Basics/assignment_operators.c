/**
 * ============================================================================
 * Topic       : Assignment Operators
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-1/DSA-with-C
 * Description : Demonstrates assignment operators in C that perform
 *               arithmetic operations and assign the result to the
 *               left operand in a single step.
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Variable Declaration & Initialization
    int x = 10;

    // 1. Addition assignment (+=): Adds right operand to left operand
    //    and assigns the result to left operand
    x += 5;
    printf("After += : %d\n", x);

    // 2. Subtraction assignment (-=): Subtracts right operand from left
    //    operand and assigns the result to left operand
    x -= 3;
    printf("After -= : %d\n", x);

    // 3. Multiplication assignment (*=): Multiplies left operand by right
    //    operand and assigns the result to left operand
    x *= 2;
    printf("After *= : %d\n", x);

    // 4. Division assignment (/=): Divides left operand by right operand
    //    and assigns the result to left operand (integer division)
    x /= 4;
    printf("After /= : %d\n", x);

    // 5. Modulo assignment (%=): Computes remainder of division of left
    //    operand by right operand and assigns the result to left operand
    x %= 3;
    printf("After %%= : %d\n", x);

    return 0;
}