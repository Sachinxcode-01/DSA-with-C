#include<stdio.h>


int main()
{
    int n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("n ",i," = ", (n*i));
    }
    return 0;
}