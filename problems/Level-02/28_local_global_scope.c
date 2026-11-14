#include<stdio.h>

int number =100;

void display()
{
    printf("Inside Didplay Func = %d\n",number);
}

int main()
{
    printf("Inside Main Func = %d\n",number);

    display();


    return 0;
}

/*
Inside Main Func = 100
Inside Didplay Func = 100

*/