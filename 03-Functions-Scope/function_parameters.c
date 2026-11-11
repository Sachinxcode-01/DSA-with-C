#include<stdio.h>

void greetuser(int age);

int main()
{
    greetuser(20);
    return 0;
}

void greetuser(int age)
{
    printf("Your is age %d\n",age);
}