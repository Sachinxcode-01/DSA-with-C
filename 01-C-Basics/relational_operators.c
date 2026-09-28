/**
 * ============================================================================
 * Topic       : Relational / Comparison Operators
 * Module      : 01-C-Basics
 * Repository  : https://github.com/Sachinxcode-01/DSA-with-C
 * Description : Demonstrates relational operators in C that compare two operands
 *               and evaluate to boolean values (1 for True, 0 for False).
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Variable Declaration & Initialization
    int a = 10;
    int b = 5;

    // Displaying input values and evaluations (1 = True, 0 = False)
    printf("--- Relational Operations (a = %d, b = %d) ---\n", a, b);

    // 1. Greater than (>): True (1) if left operand is strictly greater
    printf("Greater than (a > b)    : %d\n", a > b);

    // 2. Less than (<): True (1) if left operand is strictly less
    printf("Less than (a < b)       : %d\n", a < b);

    // 3. Equal to (==): True (1) if both operands are equal
    printf("Equal to (a == b)       : %d\n", a == b);

    // 4. Not equal to (!=): True (1) if operands are not equal
    printf("Not equal to (a != b)   : %d\n", a != b);

    return 0;
}