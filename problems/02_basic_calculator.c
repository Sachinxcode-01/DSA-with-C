#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter Value of a =");
    scanf("%d",&a);

    printf("Enter Value of b =");
    scanf("%d",&b);

    // Added %d format specifiers to print the results
    printf("Addition = %d\n",a+b);
    printf("Substraction = %d\n",a-b);
    printf("Multipication= %d\n",a*b);

    if (b!=0)
        {
            printf("Division = %d\n",a/b);
            printf("Reminder = %d\n",a%b);

        }else{
            
            printf("Invalid!");
        }
    

    return 0;
}