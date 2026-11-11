#include<stdio.h>


//Function Declaration
void welcome();

int main()
{
    printf("Learning Function!\n");

    //Function Call
    welcome();
    welcome();
    welcome();

    return 0;
}


//Function Definition
void welcome()
{
    printf("Welcome to C Programming!\n");
}
/*
Learning Function!
Welcome to C Programming!
Welcome to C Programming!
Welcome to C Programming!

*/