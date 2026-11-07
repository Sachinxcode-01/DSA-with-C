#include<stdio.h>

int main()
{   
    //Declaration
    int a,b;
    char operator;

    // Selecting Operator 
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    //Taking User Value's
    printf("Enter Value of a = :");
    scanf("%d",&a);

    printf("Enter Value of b= :");
    scanf("%d",&b);

    //
    switch(operator)
    {
        case '+':
            printf("Addition %d = ",a+b);
            break;
        case '-':
            printf("Substraction %d = ",a-b);
            break;
        case '*':
            printf("Multipication %d = ",a*b);
            break;
        case '/':
            if (b!=0)
            {
                printf("Division %d = ",a/b);
            }
            else
            {
                printf("Not Divisiable!");
            }
            break;
            
        default :
            printf("Inavalid Operator!");    
    }

    return 0;
}