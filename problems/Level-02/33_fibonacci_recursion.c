#include <stdio.h>

// Function Declaration
int fibonacci(int n);

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0)
    {
        printf("Please enter a positive number greater than 0.\n");
    }
    else
    {
        printf("Fibonacci Sequence (%d terms):\n", terms);
        for (int i = 0; i < terms; i++)
        {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}

// Function Definition: Fibonacci using Recursion
int fibonacci(int n)
{
    // Base Conditions
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // Recursive Call (Tree Recursion)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
Sample Output:

Enter number of terms: 8
Fibonacci Sequence (8 terms):
0 1 1 2 3 5 8 13 
*/
