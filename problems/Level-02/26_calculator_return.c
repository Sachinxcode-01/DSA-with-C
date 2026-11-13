#include<stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);


int main()
{
    int a,b;

    printf("=====Calculation By Return Value=====\n");

    printf("Enter the value of a = ");
    scanf("%d",&a);

    printf("Enter the Value of b = ");
    scanf("%d",&b);

    printf("Addition =%d\n",add(a,b));
    printf("Substraction =%d\n",subtract(a,b));
    printf("Multipication =%d\n",multiply(a,b));
    printf("Division =%.2f\n",divide(a,b));

    return 0;

}

int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float divide(int a, int b){
    return (float)a/b;
}