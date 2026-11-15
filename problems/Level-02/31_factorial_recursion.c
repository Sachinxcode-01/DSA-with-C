#include<stdio.h>

long long  factorial(int n);

int main()
{
    int nor;
    long long result;

    printf("Enter a Nor : ");
    scanf("%d",&nor);

    if(nor<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if(nor>20)
    {
        printf("Number is too large. Enter a number between 0 and 20.\n");

    }
    else
    {
        result=factorial(nor);

        printf("Factorial of %d = %lld\n",nor,result);
    }

    return 0;

}

long long factorial(int n)
{
    //Base Coondition
    if(n==0||n==1)
    {
        return 1;
    }

    return n* factorial(n-1);

}