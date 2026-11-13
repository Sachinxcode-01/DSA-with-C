#include<stdio.h>

void calculator(int a ,int b);


int main()
{
    int a,b;
    printf("------CALCULATOR------\n");
    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter Value of b :" );
    scanf("%d",&b);

    calculator(a,b);

    return 0;
}

void calculator(int a ,int b)
{
    printf("Addition :%d\n",a+b);
    printf("Substraction :%d\n",a-b);
    printf("Multipication :%d\n",a*b);
    if(b!=0)
    {
        printf("Division :%d\n",a/b);
    }
    else{
        printf("Not Divisible!");
    }

    
}