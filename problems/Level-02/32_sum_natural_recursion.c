#include <stdio.h>

int sumNatural(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumNatural(n - 1);
}

int main()
{
    int nor;

    printf("Enter a number: ");
    scanf("%d", &nor);

    if (nor < 0)
    {
        printf("Please enter a positive number.\n");
    }
    else
    {
        printf("Sum of Natural Numbers: %d\n", sumNatural(nor));
    }

    return 0;
}