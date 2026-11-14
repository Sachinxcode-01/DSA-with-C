#include <stdio.h>

// Function Declarations
void welcome();
void square(int n);
int getAge();
int multiply(int a, int b);

int main()
{
    int age, result;

    // Type 1: No Arguments, No Return Value
    welcome();

    // Type 2: Arguments, No Return Value
    square(5);

    // Type 3: No Arguments, With Return Value
    age = getAge();
    printf("Age = %d\n\n", age);

    // Type 4: Arguments, With Return Value
    result = multiply(10, 10);
    printf("Multiplication = %d\n", result);

    return 0;
}

// Type 1: No Arguments, No Return Value
void welcome()
{
    printf("Welcome to C Programming!\n\n");
}

// Type 2: Arguments, No Return Value
void square(int n)
{
    printf("Square = %d\n\n", n * n);
}

// Type 3: No Arguments, With Return Value
int getAge()
{
    return 20;
}

// Type 4: Arguments, With Return Value
int multiply(int a, int b)
{
    return a * b;
}