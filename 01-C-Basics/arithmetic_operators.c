/**
 * ============================================================================
 * Topic       : Arithmetic Operators
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-01/DSA-with-C
 * Description : Demonstrates fundamental binary arithmetic operators in C
 *               (Addition, Subtraction, Multiplication, Division, and Modulus).
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Variable Declaration & Initialization
    int a = 10;
    int b = 5;

    // Displaying input values
    printf("--- Arithmetic Operations (a = %d, b = %d) ---\n", a, b);

    // 1. Addition (+): Adds two operands
    printf("Addition (a + b)        = %d\n", a + b);

    // 2. Subtraction (-): Subtracts right operand from left operand
    printf("Subtraction (a - b)     = %d\n", a - b);

    // 3. Multiplication (*): Multiplies both operands
    printf("Multiplication (a * b)  = %d\n", a * b);

    // 4. Division (/): Computes quotient of integer division
    printf("Division (a / b)        = %d\n", a / b);

    // 5. Modulo (%): Computes remainder of integer division
    printf("Remainder / Modulo (a %% b) = %d\n", a % b);

    return 0;
}