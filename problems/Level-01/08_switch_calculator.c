#include<stdio.h>

int main()
{
    int a,b;
    char op;

    printf("Enter the Value of a =");
    scanf("%d",&a);

    printf("Enter the Value of b =");
    scanf("%d",&b);

    printf("Enter the Operator(+ - * /) : ");
    // The space before %c consumes the leftover newline from the previous input
    scanf(" %c",&op);

    switch(op)
    {
        case '+':
            printf("Addition = %d\n",a+b);
            break;

        case '-':
            printf("Substraction = %d\n",a-b);
            break;
        
        case '*':
            printf("Multipication = %d\n",a*b);
            break;

        case '/':
            if (b!=0)
            {
                printf("Division = %d\n",a/b);

            }
            else
            {
                printf("Not Divisable by Zero.\n");
            }
            break;

        default:
            printf("Invalid Choice!\n");
    }
    return 0;
}