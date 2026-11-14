#include <stdio.h>


int nor =100;

void display()
{
    printf("Inside Display Func = %d\n\n",nor);
}

int main()
{
    printf("Inside Main Funct = %d\n\n",nor);

    display();

    return 0;
}

/*
Inside Main Funct = 100

Inside Display Func = 100


*/