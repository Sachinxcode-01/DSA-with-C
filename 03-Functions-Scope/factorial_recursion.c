#include<stdio.h>

int factorial(int n)

{
    //Base Condition
    if (n==0||n==1)
    {
        return 1;

    }

    //Recursive Call
    return n*factorial(n-1);
}

int main()
{
    int nor;

    printf("Enter a Nor : ");
    scanf("%d",&nor);

    if (nor<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }

    else
    {
        printf("Factorial =%d\n",factorial(nor));

    }

    return 0;
}